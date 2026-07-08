using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Profiling.LowLevel.Unsafe;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x2000022")]
[DebuggerTypeProxy(typeof(ProfilerRecorderDebugView))]
[DebuggerDisplay("Count = {Count}")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerRecorder.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ProfilerRecorder : IDisposable
{
	[Token(Token = "0x2000023")]
	internal enum ControlOptions
	{
		[Token(Token = "0x400004B")]
		Start = 0,
		[Token(Token = "0x400004C")]
		Stop = 1,
		[Token(Token = "0x400004D")]
		Reset = 2,
		[Token(Token = "0x400004E")]
		Release = 4,
		[Token(Token = "0x400004F")]
		SetFilterToCurrentThread = 5,
		[Token(Token = "0x4000050")]
		SetToCollectFromAllThreads = 6
	}

	[Token(Token = "0x2000024")]
	internal enum CountOptions
	{
		[Token(Token = "0x4000052")]
		Count,
		[Token(Token = "0x4000053")]
		MaxCount
	}

	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong handle;

	[Token(Token = "0x17000005")]
	public bool Valid
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4A84BE0", Offset = "0x4A84BE0", VA = "0x4A84BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public long LastValue
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4A84E20", Offset = "0x4A84E20", VA = "0x4A84E20")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000007")]
	public int Count
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4A84EF0", Offset = "0x4A84EF0", VA = "0x4A84EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000008")]
	public bool IsRunning
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4A84FC0", Offset = "0x4A84FC0", VA = "0x4A84FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4A84B20", Offset = "0x4A84B20", VA = "0x4A84B20")]
	public ProfilerRecorder(ProfilerRecorderHandle statHandle, int capacity = 1, ProfilerRecorderOptions options = ProfilerRecorderOptions.Default)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4A84C70", Offset = "0x4A84C70", VA = "0x4A84C70")]
	public void Start()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4A84D90", Offset = "0x4A84D90", VA = "0x4A84D90")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4A85090", Offset = "0x4A85090", VA = "0x4A85090")]
	public ProfilerRecorderSample GetSample(int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4A84B80", Offset = "0x4A84B80", VA = "0x4A84B80")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorder Create(ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options)
	{
		return default(ProfilerRecorder);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4A84D50", Offset = "0x4A84D50", VA = "0x4A84D50")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static void Control(ProfilerRecorder handle, ControlOptions options)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4A84EB0", Offset = "0x4A84EB0", VA = "0x4A84EB0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static long GetLastValue(ProfilerRecorder handle)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4A84F80", Offset = "0x4A84F80", VA = "0x4A84F80")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetCount(ProfilerRecorder handle, CountOptions countOptions)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4A84C30", Offset = "0x4A84C30", VA = "0x4A84C30")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetValid(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4A85050", Offset = "0x4A85050", VA = "0x4A85050")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetRunning(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4A85160", Offset = "0x4A85160", VA = "0x4A85160")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorderSample GetSampleInternal(ProfilerRecorder handle, int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4A85370", Offset = "0x4A85370", VA = "0x4A85370", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4A84D00", Offset = "0x4A84D00", VA = "0x4A84D00")]
	[BurstDiscard]
	private void CheckInitializedAndThrow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4A851D0", Offset = "0x4A851D0", VA = "0x4A851D0")]
	private static extern void Create_Injected([In] ref ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options, out ProfilerRecorder ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4A85220", Offset = "0x4A85220", VA = "0x4A85220")]
	private static extern void Control_Injected([In] ref ProfilerRecorder handle, ControlOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4A85260", Offset = "0x4A85260", VA = "0x4A85260")]
	private static extern long GetLastValue_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4A85290", Offset = "0x4A85290", VA = "0x4A85290")]
	private static extern int GetCount_Injected([In] ref ProfilerRecorder handle, CountOptions countOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4A852D0", Offset = "0x4A852D0", VA = "0x4A852D0")]
	private static extern bool GetValid_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4A85300", Offset = "0x4A85300", VA = "0x4A85300")]
	private static extern bool GetRunning_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4A85330", Offset = "0x4A85330", VA = "0x4A85330")]
	private static extern void GetSampleInternal_Injected([In] ref ProfilerRecorder handle, int index, out ProfilerRecorderSample ret);
}

// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerRecorder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DAC400", Offset = "0x4DAC400", VA = "0x4DAC400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public long LastValue
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4DAC640", Offset = "0x4DAC640", VA = "0x4DAC640")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000007")]
	public int Count
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4DAC710", Offset = "0x4DAC710", VA = "0x4DAC710")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000008")]
	public bool IsRunning
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4DAC7E0", Offset = "0x4DAC7E0", VA = "0x4DAC7E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4DAC340", Offset = "0x4DAC340", VA = "0x4DAC340")]
	public ProfilerRecorder(ProfilerRecorderHandle statHandle, int capacity = 1, ProfilerRecorderOptions options = ProfilerRecorderOptions.Default)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4DAC490", Offset = "0x4DAC490", VA = "0x4DAC490")]
	public void Start()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4DAC5B0", Offset = "0x4DAC5B0", VA = "0x4DAC5B0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4DAC8B0", Offset = "0x4DAC8B0", VA = "0x4DAC8B0")]
	public ProfilerRecorderSample GetSample(int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4DAC3A0", Offset = "0x4DAC3A0", VA = "0x4DAC3A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorder Create(ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options)
	{
		return default(ProfilerRecorder);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4DAC570", Offset = "0x4DAC570", VA = "0x4DAC570")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static void Control(ProfilerRecorder handle, ControlOptions options)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4DAC6D0", Offset = "0x4DAC6D0", VA = "0x4DAC6D0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static long GetLastValue(ProfilerRecorder handle)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4DAC7A0", Offset = "0x4DAC7A0", VA = "0x4DAC7A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetCount(ProfilerRecorder handle, CountOptions countOptions)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4DAC450", Offset = "0x4DAC450", VA = "0x4DAC450")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetValid(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4DAC870", Offset = "0x4DAC870", VA = "0x4DAC870")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetRunning(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4DAC980", Offset = "0x4DAC980", VA = "0x4DAC980")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorderSample GetSampleInternal(ProfilerRecorder handle, int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4DACB90", Offset = "0x4DACB90", VA = "0x4DACB90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4DAC520", Offset = "0x4DAC520", VA = "0x4DAC520")]
	[BurstDiscard]
	private void CheckInitializedAndThrow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4DAC9F0", Offset = "0x4DAC9F0", VA = "0x4DAC9F0")]
	private static extern void Create_Injected([In] ref ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options, out ProfilerRecorder ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4DACA40", Offset = "0x4DACA40", VA = "0x4DACA40")]
	private static extern void Control_Injected([In] ref ProfilerRecorder handle, ControlOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4DACA80", Offset = "0x4DACA80", VA = "0x4DACA80")]
	private static extern long GetLastValue_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4DACAB0", Offset = "0x4DACAB0", VA = "0x4DACAB0")]
	private static extern int GetCount_Injected([In] ref ProfilerRecorder handle, CountOptions countOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4DACAF0", Offset = "0x4DACAF0", VA = "0x4DACAF0")]
	private static extern bool GetValid_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4DACB20", Offset = "0x4DACB20", VA = "0x4DACB20")]
	private static extern bool GetRunning_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4DACB50", Offset = "0x4DACB50", VA = "0x4DACB50")]
	private static extern void GetSampleInternal_Injected([In] ref ProfilerRecorder handle, int index, out ProfilerRecorderSample ret);
}

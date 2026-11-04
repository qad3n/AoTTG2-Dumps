// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerRecorder
// Update status: CHANGED in this game update
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

[Token(Token = "0x200002D")]
[UnityEngine.Scripting.UsedByNativeCode]
[DebuggerDisplay("Count = {Count}")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerRecorder.bindings.h")]
[DebuggerTypeProxy(typeof(ProfilerRecorderDebugView))]
public struct ProfilerRecorder : IDisposable
{
	[Token(Token = "0x200002E")]
	internal enum ControlOptions
	{
		[Token(Token = "0x4000064")]
		Start = 0,
		[Token(Token = "0x4000065")]
		Stop = 1,
		[Token(Token = "0x4000066")]
		Reset = 2,
		[Token(Token = "0x4000067")]
		Release = 4,
		[Token(Token = "0x4000068")]
		SetFilterToCurrentThread = 5,
		[Token(Token = "0x4000069")]
		SetToCollectFromAllThreads = 6
	}

	[Token(Token = "0x200002F")]
	internal enum CountOptions
	{
		[Token(Token = "0x400006B")]
		Count,
		[Token(Token = "0x400006C")]
		MaxCount
	}

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong handle;

	[Token(Token = "0x4000062")]
	internal const ProfilerRecorderOptions SharedRecorder = (ProfilerRecorderOptions)128;

	[Token(Token = "0x1700000C")]
	public bool Valid
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x2ECEB60", Offset = "0x2ECD160", VA = "0x182ECEB60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public long LastValue
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2ECEAD0", Offset = "0x2ECD0D0", VA = "0x182ECEAD0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700000E")]
	public int Count
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x2ECE9A0", Offset = "0x2ECCFA0", VA = "0x182ECE9A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsRunning
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2ECEA40", Offset = "0x2ECD040", VA = "0x182ECEA40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2ECE930", Offset = "0x2ECCF30", VA = "0x182ECE930")]
	public ProfilerRecorder(ProfilerRecorderHandle statHandle, int capacity = 1, ProfilerRecorderOptions options = ProfilerRecorderOptions.Default)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2ECE7F0", Offset = "0x2ECCDF0", VA = "0x182ECE7F0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2ECE890", Offset = "0x2ECCE90", VA = "0x182ECE890")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2ECE6A0", Offset = "0x2ECCCA0", VA = "0x182ECE6A0")]
	public ProfilerRecorderSample GetSample(int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2ECE3C0", Offset = "0x2ECC9C0", VA = "0x182ECE3C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorder Create(ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options)
	{
		return default(ProfilerRecorder);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2ECE330", Offset = "0x2ECC930", VA = "0x182ECE330")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static void Control(ProfilerRecorder handle, ControlOptions options)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2ECE530", Offset = "0x2ECCB30", VA = "0x182ECE530")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static long GetLastValue(ProfilerRecorder handle)
	{
		return default(long);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2ECE4B0", Offset = "0x2ECCAB0", VA = "0x182ECE4B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetCount(ProfilerRecorder handle, CountOptions countOptions)
	{
		return default(int);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2ECE7B0", Offset = "0x2ECCDB0", VA = "0x182ECE7B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetValid(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2ECE5B0", Offset = "0x2ECCBB0", VA = "0x182ECE5B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetRunning(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2ECE640", Offset = "0x2ECCC40", VA = "0x182ECE640")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorderSample GetSampleInternal(ProfilerRecorder handle, int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2ECE420", Offset = "0x2ECCA20", VA = "0x182ECE420", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2ECE280", Offset = "0x2ECC880", VA = "0x182ECE280")]
	[BurstDiscard]
	private void CheckInitializedAndThrow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2ECE370", Offset = "0x2ECC970", VA = "0x182ECE370")]
	private static extern void Create_Injected([In] ref ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options, out ProfilerRecorder ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2ECE2F0", Offset = "0x2ECC8F0", VA = "0x182ECE2F0")]
	private static extern void Control_Injected([In] ref ProfilerRecorder handle, ControlOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2ECE4F0", Offset = "0x2ECCAF0", VA = "0x182ECE4F0")]
	private static extern long GetLastValue_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2ECE470", Offset = "0x2ECCA70", VA = "0x182ECE470")]
	private static extern int GetCount_Injected([In] ref ProfilerRecorder handle, CountOptions countOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2ECE770", Offset = "0x2ECCD70", VA = "0x182ECE770")]
	private static extern bool GetValid_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2ECE570", Offset = "0x2ECCB70", VA = "0x182ECE570")]
	private static extern bool GetRunning_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2ECE5F0", Offset = "0x2ECCBF0", VA = "0x182ECE5F0")]
	private static extern void GetSampleInternal_Injected([In] ref ProfilerRecorder handle, int index, out ProfilerRecorderSample ret);
}

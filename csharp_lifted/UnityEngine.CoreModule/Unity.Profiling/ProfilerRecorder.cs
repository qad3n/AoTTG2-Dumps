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

[Token(Token = "0x200002D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerRecorder.bindings.h")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(ProfilerRecorderDebugView))]
[UnityEngine.Scripting.UsedByNativeCode]
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
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x68B5120", Offset = "0x68B4120", VA = "0x68B5120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public long LastValue
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x68B5360", Offset = "0x68B4360", VA = "0x68B5360")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700000E")]
	public int Count
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x68B5430", Offset = "0x68B4430", VA = "0x68B5430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsRunning
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x68B5500", Offset = "0x68B4500", VA = "0x68B5500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x68B5060", Offset = "0x68B4060", VA = "0x68B5060")]
	public ProfilerRecorder(ProfilerRecorderHandle statHandle, int capacity = 1, ProfilerRecorderOptions options = ProfilerRecorderOptions.Default)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x68B51B0", Offset = "0x68B41B0", VA = "0x68B51B0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x68B52D0", Offset = "0x68B42D0", VA = "0x68B52D0")]
	public void Stop()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x68B55D0", Offset = "0x68B45D0", VA = "0x68B55D0")]
	public ProfilerRecorderSample GetSample(int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x68B50C0", Offset = "0x68B40C0", VA = "0x68B50C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorder Create(ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options)
	{
		return default(ProfilerRecorder);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x68B5290", Offset = "0x68B4290", VA = "0x68B5290")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static void Control(ProfilerRecorder handle, ControlOptions options)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x68B53F0", Offset = "0x68B43F0", VA = "0x68B53F0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static long GetLastValue(ProfilerRecorder handle)
	{
		return default(long);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x68B54C0", Offset = "0x68B44C0", VA = "0x68B54C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetCount(ProfilerRecorder handle, CountOptions countOptions)
	{
		return default(int);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x68B5170", Offset = "0x68B4170", VA = "0x68B5170")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetValid(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x68B5590", Offset = "0x68B4590", VA = "0x68B5590")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static bool GetRunning(ProfilerRecorder handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x68B56A0", Offset = "0x68B46A0", VA = "0x68B56A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static ProfilerRecorderSample GetSampleInternal(ProfilerRecorder handle, int index)
	{
		return default(ProfilerRecorderSample);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x68B58B0", Offset = "0x68B48B0", VA = "0x68B58B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x68B5240", Offset = "0x68B4240", VA = "0x68B5240")]
	[BurstDiscard]
	private void CheckInitializedAndThrow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x68B5710", Offset = "0x68B4710", VA = "0x68B5710")]
	private static extern void Create_Injected([In] ref ProfilerRecorderHandle statHandle, int maxSampleCount, ProfilerRecorderOptions options, out ProfilerRecorder ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x68B5760", Offset = "0x68B4760", VA = "0x68B5760")]
	private static extern void Control_Injected([In] ref ProfilerRecorder handle, ControlOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x68B57A0", Offset = "0x68B47A0", VA = "0x68B57A0")]
	private static extern long GetLastValue_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x68B57D0", Offset = "0x68B47D0", VA = "0x68B57D0")]
	private static extern int GetCount_Injected([In] ref ProfilerRecorder handle, CountOptions countOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x68B5810", Offset = "0x68B4810", VA = "0x68B5810")]
	private static extern bool GetValid_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x68B5840", Offset = "0x68B4840", VA = "0x68B5840")]
	private static extern bool GetRunning_Injected([In] ref ProfilerRecorder handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x68B5870", Offset = "0x68B4870", VA = "0x68B5870")]
	private static extern void GetSampleInternal_Injected([In] ref ProfilerRecorder handle, int index, out ProfilerRecorderSample ret);
}

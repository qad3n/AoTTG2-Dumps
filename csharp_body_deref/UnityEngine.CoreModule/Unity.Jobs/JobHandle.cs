// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.JobHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace Unity.Jobs;

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Jobs/ScriptBindings/JobsBindings.h")]
public struct JobHandle : IEquatable<JobHandle>
{
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	internal ulong jobGroup;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x8")]
	internal int version;

	[Token(Token = "0x17000001")]
	public bool IsCompleted
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x68B2C30", Offset = "0x68B1C30", VA = "0x68B2C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x68B2BC0", Offset = "0x68B1BC0", VA = "0x68B2BC0")]
	public void Complete()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x68B2C90", Offset = "0x68B1C90", VA = "0x68B2C90")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobs", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void ScheduleBatchedJobs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x68B2C00", Offset = "0x68B1C00", VA = "0x68B2C00")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndComplete", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern void ScheduleBatchedJobsAndComplete(ref JobHandle job);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x68B2C60", Offset = "0x68B1C60", VA = "0x68B2C60")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndIsCompleted", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern bool ScheduleBatchedJobsAndIsCompleted(ref JobHandle job);

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x68B2CC0", Offset = "0x68B1CC0", VA = "0x68B2CC0")]
	public static JobHandle CombineDependencies(JobHandle job0, JobHandle job1)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x68B2D70", Offset = "0x68B1D70", VA = "0x68B2D70")]
	public static JobHandle CombineDependencies(JobHandle job0, JobHandle job1, JobHandle job2)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x68B2E40", Offset = "0x68B1E40", VA = "0x68B2E40")]
	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x68B2F20", Offset = "0x68B1F20", VA = "0x68B2F20")]
	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x68B2D20", Offset = "0x68B1D20", VA = "0x68B2D20")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static JobHandle CombineDependenciesInternal2(ref JobHandle job0, ref JobHandle job1)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x68B2DE0", Offset = "0x68B1DE0", VA = "0x68B2DE0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static JobHandle CombineDependenciesInternal3(ref JobHandle job0, ref JobHandle job1, ref JobHandle job2)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x68B2ED0", Offset = "0x68B1ED0", VA = "0x68B2ED0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe static JobHandle CombineDependenciesInternalPtr(void* jobs, int count)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x68B30A0", Offset = "0x68B20A0", VA = "0x68B30A0", Slot = "4")]
	public bool Equals(JobHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x68B30B0", Offset = "0x68B20B0", VA = "0x68B30B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x68B3110", Offset = "0x68B2110", VA = "0x68B3110")]
	public static bool operator ==(JobHandle a, JobHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x68B3120", Offset = "0x68B2120", VA = "0x68B3120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x68B2FD0", Offset = "0x68B1FD0", VA = "0x68B2FD0")]
	private static extern void CombineDependenciesInternal2_Injected(ref JobHandle job0, ref JobHandle job1, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x68B3010", Offset = "0x68B2010", VA = "0x68B3010")]
	private static extern void CombineDependenciesInternal3_Injected(ref JobHandle job0, ref JobHandle job1, ref JobHandle job2, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x68B3060", Offset = "0x68B2060", VA = "0x68B3060")]
	private unsafe static extern void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret);
}

// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.JobHandle
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2ECC000", Offset = "0x2ECA600", VA = "0x182ECC000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2ECBED0", Offset = "0x2ECA4D0", VA = "0x182ECBED0")]
	public void Complete()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2ECC040", Offset = "0x2ECA640", VA = "0x182ECC040")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobs", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void ScheduleBatchedJobs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2ECBFC0", Offset = "0x2ECA5C0", VA = "0x182ECBFC0")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndComplete", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern void ScheduleBatchedJobsAndComplete(ref JobHandle job);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2ECC000", Offset = "0x2ECA600", VA = "0x182ECC000")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndIsCompleted", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern bool ScheduleBatchedJobsAndIsCompleted(ref JobHandle job);

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2ECBE60", Offset = "0x2ECA460", VA = "0x182ECBE60")]
	public static JobHandle CombineDependencies(JobHandle job0, JobHandle job1)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2ECBC80", Offset = "0x2ECA280", VA = "0x182ECBC80")]
	public static JobHandle CombineDependencies(JobHandle job0, JobHandle job1, JobHandle job2)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2ECBCF0", Offset = "0x2ECA2F0", VA = "0x182ECBCF0")]
	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2ECBDA0", Offset = "0x2ECA3A0", VA = "0x182ECBDA0")]
	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2ECBAC0", Offset = "0x2ECA0C0", VA = "0x182ECBAC0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static JobHandle CombineDependenciesInternal2(ref JobHandle job0, ref JobHandle job1)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2ECBB70", Offset = "0x2ECA170", VA = "0x182ECBB70")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static JobHandle CombineDependenciesInternal3(ref JobHandle job0, ref JobHandle job1, ref JobHandle job2)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2ECBC20", Offset = "0x2ECA220", VA = "0x182ECBC20")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe static JobHandle CombineDependenciesInternalPtr(void* jobs, int count)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2ECBFA0", Offset = "0x2ECA5A0", VA = "0x182ECBFA0", Slot = "4")]
	public bool Equals(JobHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2ECBF10", Offset = "0x2ECA510", VA = "0x182ECBF10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2ECBFA0", Offset = "0x2ECA5A0", VA = "0x182ECBFA0")]
	public static bool operator ==(JobHandle a, JobHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2ECBFB0", Offset = "0x2ECA5B0", VA = "0x182ECBFB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2ECBA60", Offset = "0x2ECA060", VA = "0x182ECBA60")]
	private static extern void CombineDependenciesInternal2_Injected(ref JobHandle job0, ref JobHandle job1, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2ECBB20", Offset = "0x2ECA120", VA = "0x182ECBB20")]
	private static extern void CombineDependenciesInternal3_Injected(ref JobHandle job0, ref JobHandle job1, ref JobHandle job2, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2ECBBD0", Offset = "0x2ECA1D0", VA = "0x182ECBBD0")]
	private unsafe static extern void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret);
}

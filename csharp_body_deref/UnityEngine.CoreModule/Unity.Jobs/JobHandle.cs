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

[Token(Token = "0x2000011")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Jobs/ScriptBindings/JobsBindings.h")]
public struct JobHandle : IEquatable<JobHandle>
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	internal ulong jobGroup;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x8")]
	internal int version;

	[Token(Token = "0x17000001")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4DAB900", Offset = "0x4DAB900", VA = "0x4DAB900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DAB890", Offset = "0x4DAB890", VA = "0x4DAB890")]
	public void Complete()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4DAB960", Offset = "0x4DAB960", VA = "0x4DAB960")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobs", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void ScheduleBatchedJobs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4DAB8D0", Offset = "0x4DAB8D0", VA = "0x4DAB8D0")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndComplete", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern void ScheduleBatchedJobsAndComplete(ref JobHandle job);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4DAB930", Offset = "0x4DAB930", VA = "0x4DAB930")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndIsCompleted", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern bool ScheduleBatchedJobsAndIsCompleted(ref JobHandle job);

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4DAB990", Offset = "0x4DAB990", VA = "0x4DAB990")]
	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4DABA70", Offset = "0x4DABA70", VA = "0x4DABA70")]
	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4DABA20", Offset = "0x4DABA20", VA = "0x4DABA20")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe static JobHandle CombineDependenciesInternalPtr(void* jobs, int count)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4DABB60", Offset = "0x4DABB60", VA = "0x4DABB60", Slot = "4")]
	public bool Equals(JobHandle other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4DABB20", Offset = "0x4DABB20", VA = "0x4DABB20")]
	private unsafe static extern void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret);
}

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
		[Address(RVA = "0x4A840E0", Offset = "0x4A840E0", VA = "0x4A840E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4A84070", Offset = "0x4A84070", VA = "0x4A84070")]
	public void Complete()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4A84140", Offset = "0x4A84140", VA = "0x4A84140")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobs", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void ScheduleBatchedJobs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4A840B0", Offset = "0x4A840B0", VA = "0x4A840B0")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndComplete", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern void ScheduleBatchedJobsAndComplete(ref JobHandle job);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4A84110", Offset = "0x4A84110", VA = "0x4A84110")]
	[UnityEngine.Bindings.NativeMethod("ScheduleBatchedScriptingJobsAndIsCompleted", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	private static extern bool ScheduleBatchedJobsAndIsCompleted(ref JobHandle job);

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4A84170", Offset = "0x4A84170", VA = "0x4A84170")]
	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4A84250", Offset = "0x4A84250", VA = "0x4A84250")]
	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4A84200", Offset = "0x4A84200", VA = "0x4A84200")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe static JobHandle CombineDependenciesInternalPtr(void* jobs, int count)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4A84340", Offset = "0x4A84340", VA = "0x4A84340", Slot = "4")]
	public bool Equals(JobHandle other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4A84300", Offset = "0x4A84300", VA = "0x4A84300")]
	private unsafe static extern void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret);
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.JobMerger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058B")]
internal class JobMerger : IDisposable
{
	[Token(Token = "0x4001352")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x4001353")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x4001354")]
	[FieldOffset(Offset = "0x20")]
	private int m_JobCount;

	[Token(Token = "0x17000A5B")]
	protected bool disposed
	{
		[Token(Token = "0x600298D")]
		[Address(RVA = "0x6B883C0", Offset = "0x6B873C0", VA = "0x6B883C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600298E")]
		[Address(RVA = "0x6B883D0", Offset = "0x6B873D0", VA = "0x6B883D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600298A")]
	[Address(RVA = "0x6B882F0", Offset = "0x6B872F0", VA = "0x6B882F0")]
	public JobMerger(int capacity)
	{
	}

	[Token(Token = "0x600298B")]
	[Address(RVA = "0x6B87770", Offset = "0x6B86770", VA = "0x6B87770")]
	public void Add(JobHandle job)
	{
	}

	[Token(Token = "0x600298C")]
	[Address(RVA = "0x6B877E0", Offset = "0x6B867E0", VA = "0x6B877E0")]
	public JobHandle MergeAndReset()
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600298F")]
	[Address(RVA = "0x6B880A0", Offset = "0x6B870A0", VA = "0x6B880A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002990")]
	[Address(RVA = "0x6B883E0", Offset = "0x6B873E0", VA = "0x6B883E0")]
	protected void Dispose(bool disposing)
	{
	}
}

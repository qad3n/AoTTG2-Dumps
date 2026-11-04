// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.JobMerger
// Update status: CHANGED in this game update
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

[Token(Token = "0x20005A0")]
internal class JobMerger : IDisposable
{
	[Token(Token = "0x4001410")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x4001411")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0x20")]
	private int m_JobCount;

	[Token(Token = "0x17000A67")]
	protected bool disposed
	{
		[Token(Token = "0x60029EE")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029EF")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029EB")]
	[Address(RVA = "0x3190A40", Offset = "0x318F040", VA = "0x183190A40")]
	public JobMerger(int capacity)
	{
	}

	[Token(Token = "0x60029EC")]
	[Address(RVA = "0x31907A0", Offset = "0x318EDA0", VA = "0x1831907A0")]
	public void Add(JobHandle job)
	{
	}

	[Token(Token = "0x60029ED")]
	[Address(RVA = "0x3190900", Offset = "0x318EF00", VA = "0x183190900")]
	public JobHandle MergeAndReset()
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60029F0")]
	[Address(RVA = "0x3190880", Offset = "0x318EE80", VA = "0x183190880", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029F1")]
	[Address(RVA = "0x3190820", Offset = "0x318EE20", VA = "0x183190820")]
	protected void Dispose(bool disposing)
	{
	}
}

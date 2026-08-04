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

[Token(Token = "0x20004A7")]
internal class JobMerger : IDisposable
{
	[Token(Token = "0x4000E74")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x20")]
	private int m_JobCount;

	[Token(Token = "0x1700076D")]
	protected bool disposed
	{
		[Token(Token = "0x6001CE7")]
		[Address(RVA = "0x4F8D4C0", Offset = "0x4F8D4C0", VA = "0x4F8D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CE8")]
		[Address(RVA = "0x4F8D4D0", Offset = "0x4F8D4D0", VA = "0x4F8D4D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001CE4")]
	[Address(RVA = "0x4F8D420", Offset = "0x4F8D420", VA = "0x4F8D420")]
	public JobMerger(int capacity)
	{
	}

	[Token(Token = "0x6001CE5")]
	[Address(RVA = "0x4F8C860", Offset = "0x4F8C860", VA = "0x4F8C860")]
	public void Add(JobHandle job)
	{
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x4F8C8D0", Offset = "0x4F8C8D0", VA = "0x4F8C8D0")]
	public JobHandle MergeAndReset()
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001CE9")]
	[Address(RVA = "0x4F8D210", Offset = "0x4F8D210", VA = "0x4F8D210", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x4F8D4E0", Offset = "0x4F8D4E0", VA = "0x4F8D4E0")]
	protected void Dispose(bool disposing)
	{
	}
}

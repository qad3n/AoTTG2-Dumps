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
		[Address(RVA = "0x4C65B90", Offset = "0x4C65B90", VA = "0x4C65B90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CE8")]
		[Address(RVA = "0x4C65BA0", Offset = "0x4C65BA0", VA = "0x4C65BA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001CE4")]
	[Address(RVA = "0x4C65AF0", Offset = "0x4C65AF0", VA = "0x4C65AF0")]
	public JobMerger(int capacity)
	{
	}

	[Token(Token = "0x6001CE5")]
	[Address(RVA = "0x4C64F30", Offset = "0x4C64F30", VA = "0x4C64F30")]
	public void Add(JobHandle job)
	{
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x4C64FA0", Offset = "0x4C64FA0", VA = "0x4C64FA0")]
	public JobHandle MergeAndReset()
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001CE9")]
	[Address(RVA = "0x4C658E0", Offset = "0x4C658E0", VA = "0x4C658E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x4C65BB0", Offset = "0x4C65BB0", VA = "0x4C65BB0")]
	protected void Dispose(bool disposing)
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.JobManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A3")]
internal class JobManager : IDisposable
{
	[Token(Token = "0x4000E4D")]
	[FieldOffset(Offset = "0x10")]
	private NativePagedList<NudgeJobData> m_NudgeJobs;

	[Token(Token = "0x4000E4E")]
	[FieldOffset(Offset = "0x18")]
	private NativePagedList<ConvertMeshJobData> m_ConvertMeshJobs;

	[Token(Token = "0x4000E4F")]
	[FieldOffset(Offset = "0x20")]
	private NativePagedList<CopyMeshJobData> m_CopyMeshJobs;

	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x28")]
	private JobMerger m_JobMerger;

	[Token(Token = "0x1700076C")]
	protected bool disposed
	{
		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0x4F8D030", Offset = "0x4F8D030", VA = "0x4F8D030")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x4F8D040", Offset = "0x4F8D040", VA = "0x4F8D040")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x4F8C4A0", Offset = "0x4F8C4A0", VA = "0x4F8C4A0")]
	public void Add(ref NudgeJobData job)
	{
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x4F8A050", Offset = "0x4F8A050", VA = "0x4F8A050")]
	public void Add(ref ConvertMeshJobData job)
	{
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x4F8A1E0", Offset = "0x4F8A1E0", VA = "0x4F8A1E0")]
	public void Add(ref CopyMeshJobData job)
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x4F8C4F0", Offset = "0x4F8C4F0", VA = "0x4F8C4F0")]
	public void CompleteNudgeJobs()
	{
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x4F8C950", Offset = "0x4F8C950", VA = "0x4F8C950")]
	public void CompleteConvertMeshJobs()
	{
	}

	[Token(Token = "0x6001CDE")]
	[Address(RVA = "0x4F8CCC0", Offset = "0x4F8CCC0", VA = "0x4F8CCC0")]
	public void CompleteCopyMeshJobs()
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x4F8D050", Offset = "0x4F8D050", VA = "0x4F8D050", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x4F8D0B0", Offset = "0x4F8D0B0", VA = "0x4F8D0B0")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001CE3")]
	[Address(RVA = "0x4F8D2C0", Offset = "0x4F8D2C0", VA = "0x4F8D2C0")]
	public JobManager()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.JobManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200059C")]
internal class JobManager : IDisposable
{
	[Token(Token = "0x40013E5")]
	private const string k_JobManagerName = "Renderer.JobManager";

	[Token(Token = "0x40013E6")]
	[FieldOffset(Offset = "0x10")]
	private NativePagedList<NudgeJobData> m_NudgeJobs;

	[Token(Token = "0x40013E7")]
	[FieldOffset(Offset = "0x18")]
	private NativePagedList<ConvertMeshJobData> m_ConvertMeshJobs;

	[Token(Token = "0x40013E8")]
	[FieldOffset(Offset = "0x20")]
	private NativePagedList<CopyMeshJobData> m_CopyMeshJobs;

	[Token(Token = "0x40013E9")]
	[FieldOffset(Offset = "0x28")]
	private JobMerger m_JobMerger;

	[Token(Token = "0x17000A66")]
	protected bool disposed
	{
		[Token(Token = "0x60029E6")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029E7")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029E0")]
	[Address(RVA = "0x318FAC0", Offset = "0x318E0C0", VA = "0x18318FAC0")]
	public void Add(ref NudgeJobData job)
	{
	}

	[Token(Token = "0x60029E1")]
	[Address(RVA = "0x318FA00", Offset = "0x318E000", VA = "0x18318FA00")]
	public void Add(ref ConvertMeshJobData job)
	{
	}

	[Token(Token = "0x60029E2")]
	[Address(RVA = "0x318FA60", Offset = "0x318E060", VA = "0x18318FA60")]
	public void Add(ref CopyMeshJobData job)
	{
	}

	[Token(Token = "0x60029E3")]
	[Address(RVA = "0x3190140", Offset = "0x318E740", VA = "0x183190140")]
	public void CompleteNudgeJobs()
	{
	}

	[Token(Token = "0x60029E4")]
	[Address(RVA = "0x318FB20", Offset = "0x318E120", VA = "0x18318FB20")]
	public void CompleteConvertMeshJobs()
	{
	}

	[Token(Token = "0x60029E5")]
	[Address(RVA = "0x318FE30", Offset = "0x318E430", VA = "0x18318FE30")]
	public void CompleteCopyMeshJobs()
	{
	}

	[Token(Token = "0x60029E8")]
	[Address(RVA = "0x3190510", Offset = "0x318EB10", VA = "0x183190510", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029E9")]
	[Address(RVA = "0x3190450", Offset = "0x318EA50", VA = "0x183190450")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60029EA")]
	[Address(RVA = "0x31905F0", Offset = "0x318EBF0", VA = "0x1831905F0")]
	public JobManager()
	{
	}
}

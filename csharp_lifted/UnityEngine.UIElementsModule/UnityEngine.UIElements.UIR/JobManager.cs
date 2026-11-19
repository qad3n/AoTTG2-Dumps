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

[Token(Token = "0x2000587")]
internal class JobManager : IDisposable
{
	[Token(Token = "0x4001327")]
	private const string k_JobManagerName = "Renderer.JobManager";

	[Token(Token = "0x4001328")]
	[FieldOffset(Offset = "0x10")]
	private NativePagedList<NudgeJobData> m_NudgeJobs;

	[Token(Token = "0x4001329")]
	[FieldOffset(Offset = "0x18")]
	private NativePagedList<ConvertMeshJobData> m_ConvertMeshJobs;

	[Token(Token = "0x400132A")]
	[FieldOffset(Offset = "0x20")]
	private NativePagedList<CopyMeshJobData> m_CopyMeshJobs;

	[Token(Token = "0x400132B")]
	[FieldOffset(Offset = "0x28")]
	private JobMerger m_JobMerger;

	[Token(Token = "0x17000A5A")]
	protected bool disposed
	{
		[Token(Token = "0x6002985")]
		[Address(RVA = "0x6B87EC0", Offset = "0x6B86EC0", VA = "0x6B87EC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002986")]
		[Address(RVA = "0x6B87ED0", Offset = "0x6B86ED0", VA = "0x6B87ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600297F")]
	[Address(RVA = "0x6B873F0", Offset = "0x6B863F0", VA = "0x6B873F0")]
	public void Add(ref NudgeJobData job)
	{
	}

	[Token(Token = "0x6002980")]
	[Address(RVA = "0x6B84FD0", Offset = "0x6B83FD0", VA = "0x6B84FD0")]
	public void Add(ref ConvertMeshJobData job)
	{
	}

	[Token(Token = "0x6002981")]
	[Address(RVA = "0x6B851C0", Offset = "0x6B841C0", VA = "0x6B851C0")]
	public void Add(ref CopyMeshJobData job)
	{
	}

	[Token(Token = "0x6002982")]
	[Address(RVA = "0x6B87440", Offset = "0x6B86440", VA = "0x6B87440")]
	public void CompleteNudgeJobs()
	{
	}

	[Token(Token = "0x6002983")]
	[Address(RVA = "0x6B87860", Offset = "0x6B86860", VA = "0x6B87860")]
	public void CompleteConvertMeshJobs()
	{
	}

	[Token(Token = "0x6002984")]
	[Address(RVA = "0x6B87B90", Offset = "0x6B86B90", VA = "0x6B87B90")]
	public void CompleteCopyMeshJobs()
	{
	}

	[Token(Token = "0x6002987")]
	[Address(RVA = "0x6B87EE0", Offset = "0x6B86EE0", VA = "0x6B87EE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002988")]
	[Address(RVA = "0x6B87F40", Offset = "0x6B86F40", VA = "0x6B87F40")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002989")]
	[Address(RVA = "0x6B88150", Offset = "0x6B87150", VA = "0x6B88150")]
	public JobManager()
	{
	}
}

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
		[Address(RVA = "0x4C65700", Offset = "0x4C65700", VA = "0x4C65700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x4C65710", Offset = "0x4C65710", VA = "0x4C65710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x4C64B70", Offset = "0x4C64B70", VA = "0x4C64B70")]
	public void Add(ref NudgeJobData job)
	{
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x4C62720", Offset = "0x4C62720", VA = "0x4C62720")]
	public void Add(ref ConvertMeshJobData job)
	{
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x4C628B0", Offset = "0x4C628B0", VA = "0x4C628B0")]
	public void Add(ref CopyMeshJobData job)
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x4C64BC0", Offset = "0x4C64BC0", VA = "0x4C64BC0")]
	public void CompleteNudgeJobs()
	{
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x4C65020", Offset = "0x4C65020", VA = "0x4C65020")]
	public void CompleteConvertMeshJobs()
	{
	}

	[Token(Token = "0x6001CDE")]
	[Address(RVA = "0x4C65390", Offset = "0x4C65390", VA = "0x4C65390")]
	public void CompleteCopyMeshJobs()
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x4C65720", Offset = "0x4C65720", VA = "0x4C65720", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x4C65780", Offset = "0x4C65780", VA = "0x4C65780")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001CE3")]
	[Address(RVA = "0x4C65990", Offset = "0x4C65990", VA = "0x4C65990")]
	public JobManager()
	{
	}
}

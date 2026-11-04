// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshGenerationDeferrer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A6")]
internal class MeshGenerationDeferrer : IDisposable
{
	[Token(Token = "0x20005A7")]
	private struct CallbackInfo
	{
		[Token(Token = "0x4001425")]
		[FieldOffset(Offset = "0x0")]
		public MeshGenerationCallback callback;

		[Token(Token = "0x4001426")]
		[FieldOffset(Offset = "0x8")]
		public object userData;
	}

	[Token(Token = "0x400141C")]
	[FieldOffset(Offset = "0x10")]
	private Queue<CallbackInfo> m_Fork;

	[Token(Token = "0x400141D")]
	[FieldOffset(Offset = "0x18")]
	private Queue<CallbackInfo> m_WorkThenFork;

	[Token(Token = "0x400141E")]
	[FieldOffset(Offset = "0x20")]
	private Queue<CallbackInfo> m_Work;

	[Token(Token = "0x400141F")]
	[FieldOffset(Offset = "0x28")]
	private Queue<CallbackInfo> m_JobDependentFork;

	[Token(Token = "0x4001420")]
	[FieldOffset(Offset = "0x30")]
	private Queue<CallbackInfo> m_JobDependentWorkThenFork;

	[Token(Token = "0x4001421")]
	[FieldOffset(Offset = "0x38")]
	private Queue<CallbackInfo> m_JobDependentWork;

	[Token(Token = "0x4001422")]
	[FieldOffset(Offset = "0x40")]
	private Queue<JobHandle> m_Dependencies;

	[Token(Token = "0x4001423")]
	[FieldOffset(Offset = "0x48")]
	private JobMerger m_DependencyMerger;

	[Token(Token = "0x17000A69")]
	protected bool disposed
	{
		[Token(Token = "0x6002A05")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A06")]
		[Address(RVA = "0x174C1E0", Offset = "0x174A7E0", VA = "0x18174C1E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A01")]
	[Address(RVA = "0x3190CD0", Offset = "0x318F2D0", VA = "0x183190CD0")]
	public void AddMeshGenerationJob(JobHandle jobHandle)
	{
	}

	[Token(Token = "0x6002A02")]
	[Address(RVA = "0x3190B20", Offset = "0x318F120", VA = "0x183190B20")]
	public void AddMeshGenerationCallback(MeshGenerationCallback callback, object userData, MeshGenerationCallbackType callbackType, bool isJobDependent)
	{
	}

	[Token(Token = "0x6002A03")]
	[Address(RVA = "0x3190F00", Offset = "0x318F500", VA = "0x183190F00")]
	public void ProcessDeferredWork(MeshGenerationContext meshGenerationContext)
	{
	}

	[Token(Token = "0x6002A04")]
	[Address(RVA = "0x3190E00", Offset = "0x318F400", VA = "0x183190E00")]
	private static void Invoke(CallbackInfo ci, MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002A07")]
	[Address(RVA = "0x3190D30", Offset = "0x318F330", VA = "0x183190D30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A08")]
	[Address(RVA = "0x3190DB0", Offset = "0x318F3B0", VA = "0x183190DB0")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A09")]
	[Address(RVA = "0x31912B0", Offset = "0x318F8B0", VA = "0x1831912B0")]
	public MeshGenerationDeferrer()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshGenerationDeferrer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000591")]
internal class MeshGenerationDeferrer : IDisposable
{
	[Token(Token = "0x2000592")]
	private struct CallbackInfo
	{
		[Token(Token = "0x4001367")]
		[FieldOffset(Offset = "0x0")]
		public MeshGenerationCallback callback;

		[Token(Token = "0x4001368")]
		[FieldOffset(Offset = "0x8")]
		public object userData;
	}

	[Token(Token = "0x400135E")]
	[FieldOffset(Offset = "0x10")]
	private Queue<CallbackInfo> m_Fork;

	[Token(Token = "0x400135F")]
	[FieldOffset(Offset = "0x18")]
	private Queue<CallbackInfo> m_WorkThenFork;

	[Token(Token = "0x4001360")]
	[FieldOffset(Offset = "0x20")]
	private Queue<CallbackInfo> m_Work;

	[Token(Token = "0x4001361")]
	[FieldOffset(Offset = "0x28")]
	private Queue<CallbackInfo> m_JobDependentFork;

	[Token(Token = "0x4001362")]
	[FieldOffset(Offset = "0x30")]
	private Queue<CallbackInfo> m_JobDependentWorkThenFork;

	[Token(Token = "0x4001363")]
	[FieldOffset(Offset = "0x38")]
	private Queue<CallbackInfo> m_JobDependentWork;

	[Token(Token = "0x4001364")]
	[FieldOffset(Offset = "0x40")]
	private Queue<JobHandle> m_Dependencies;

	[Token(Token = "0x4001365")]
	[FieldOffset(Offset = "0x48")]
	private JobMerger m_DependencyMerger;

	[Token(Token = "0x17000A5D")]
	protected bool disposed
	{
		[Token(Token = "0x60029A4")]
		[Address(RVA = "0x6B88CD0", Offset = "0x6B87CD0", VA = "0x6B88CD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029A5")]
		[Address(RVA = "0x6B88CE0", Offset = "0x6B87CE0", VA = "0x6B88CE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029A0")]
	[Address(RVA = "0x6B885E0", Offset = "0x6B875E0", VA = "0x6B885E0")]
	public void AddMeshGenerationJob(JobHandle jobHandle)
	{
	}

	[Token(Token = "0x60029A1")]
	[Address(RVA = "0x6B88630", Offset = "0x6B87630", VA = "0x6B88630")]
	public void AddMeshGenerationCallback(MeshGenerationCallback callback, object userData, MeshGenerationCallbackType callbackType, bool isJobDependent)
	{
	}

	[Token(Token = "0x60029A2")]
	[Address(RVA = "0x6B88790", Offset = "0x6B87790", VA = "0x6B88790")]
	public void ProcessDeferredWork(MeshGenerationContext meshGenerationContext)
	{
	}

	[Token(Token = "0x60029A3")]
	[Address(RVA = "0x6B88B60", Offset = "0x6B87B60", VA = "0x6B88B60")]
	private static void Invoke(CallbackInfo ci, MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x6B88CF0", Offset = "0x6B87CF0", VA = "0x6B88CF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x6B88D50", Offset = "0x6B87D50", VA = "0x6B88D50")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60029A8")]
	[Address(RVA = "0x6B88E30", Offset = "0x6B87E30", VA = "0x6B88E30")]
	public MeshGenerationDeferrer()
	{
	}
}

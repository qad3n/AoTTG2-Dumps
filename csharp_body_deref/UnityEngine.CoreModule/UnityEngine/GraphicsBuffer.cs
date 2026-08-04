// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GraphicsBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C5")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
public sealed class GraphicsBuffer : IDisposable
{
	[Token(Token = "0x20000C6")]
	[Flags]
	public enum Target
	{
		[Token(Token = "0x40001FA")]
		Vertex = 1,
		[Token(Token = "0x40001FB")]
		Index = 2,
		[Token(Token = "0x40001FC")]
		CopySource = 4,
		[Token(Token = "0x40001FD")]
		CopyDestination = 8,
		[Token(Token = "0x40001FE")]
		Structured = 0x10,
		[Token(Token = "0x40001FF")]
		Raw = 0x20,
		[Token(Token = "0x4000200")]
		Append = 0x40,
		[Token(Token = "0x4000201")]
		Counter = 0x80,
		[Token(Token = "0x4000202")]
		IndirectArguments = 0x100,
		[Token(Token = "0x4000203")]
		Constant = 0x200
	}

	[Token(Token = "0x20000C7")]
	[Flags]
	public enum UsageFlags
	{
		[Token(Token = "0x4000205")]
		None = 0,
		[Token(Token = "0x4000206")]
		LockBufferForWrite = 1
	}

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x170000F1")]
	public extern int count
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x4DCE2F0", Offset = "0x4DCE2F0", VA = "0x4DCE2F0")]
		get;
	}

	[Token(Token = "0x170000F2")]
	public extern int stride
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x4DCE320", Offset = "0x4DCE320", VA = "0x4DCE320")]
		get;
	}

	[Token(Token = "0x170000F3")]
	public string name
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x4DCE3B0", Offset = "0x4DCE3B0", VA = "0x4DCE3B0")]
		set
		{
		}
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4DCDC80", Offset = "0x4DCDC80", VA = "0x4DCDC80", Slot = "1")]
	~GraphicsBuffer()
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4DCDE00", Offset = "0x4DCDE00", VA = "0x4DCDE00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4DCDD60", Offset = "0x4DCDD60", VA = "0x4DCDD60")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4DCDEF0", Offset = "0x4DCDEF0", VA = "0x4DCDEF0")]
	private static bool RequiresCompute(Target target)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4DCDF00", Offset = "0x4DCDF00", VA = "0x4DCDF00")]
	private static bool IsVertexIndexOrCopyOnly(Target target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4DCDF10", Offset = "0x4DCDF10", VA = "0x4DCDF10")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer(Target target, UsageFlags usageFlags, int count, int stride);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4DCDEC0", Offset = "0x4DCDEC0", VA = "0x4DCDEC0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyBuffer")]
	private static extern void DestroyBuffer(GraphicsBuffer buf);

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4DCDF60", Offset = "0x4DCDF60", VA = "0x4DCDF60")]
	public GraphicsBuffer(Target target, int count, int stride)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4DCE2A0", Offset = "0x4DCE2A0", VA = "0x4DCE2A0")]
	public GraphicsBuffer(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x4DCDFA0", Offset = "0x4DCDFA0", VA = "0x4DCDFA0")]
	private void InternalInitialization(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x4DCE2E0", Offset = "0x4DCE2E0", VA = "0x4DCE2E0")]
	public void Release()
	{
	}

	[Token(Token = "0x60004E3")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4DCE350", Offset = "0x4DCE350", VA = "0x4DCE350")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4DCE3F0", Offset = "0x4DCE3F0", VA = "0x4DCE3F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::SetName", HasExplicitThis = true)]
	private extern void SetName(string name);
}

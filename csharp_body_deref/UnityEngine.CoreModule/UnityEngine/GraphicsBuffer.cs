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

	[Token(Token = "0x170000F0")]
	public extern int count
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x4AA69C0", Offset = "0x4AA69C0", VA = "0x4AA69C0")]
		get;
	}

	[Token(Token = "0x170000F1")]
	public extern int stride
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x4AA69F0", Offset = "0x4AA69F0", VA = "0x4AA69F0")]
		get;
	}

	[Token(Token = "0x170000F2")]
	public string name
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x4AA6A80", Offset = "0x4AA6A80", VA = "0x4AA6A80")]
		set
		{
		}
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4AA6350", Offset = "0x4AA6350", VA = "0x4AA6350", Slot = "1")]
	~GraphicsBuffer()
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4AA64D0", Offset = "0x4AA64D0", VA = "0x4AA64D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4AA6430", Offset = "0x4AA6430", VA = "0x4AA6430")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4AA65C0", Offset = "0x4AA65C0", VA = "0x4AA65C0")]
	private static bool RequiresCompute(Target target)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4AA65D0", Offset = "0x4AA65D0", VA = "0x4AA65D0")]
	private static bool IsVertexIndexOrCopyOnly(Target target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4AA65E0", Offset = "0x4AA65E0", VA = "0x4AA65E0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer(Target target, UsageFlags usageFlags, int count, int stride);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4AA6590", Offset = "0x4AA6590", VA = "0x4AA6590")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyBuffer")]
	private static extern void DestroyBuffer(GraphicsBuffer buf);

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4AA6630", Offset = "0x4AA6630", VA = "0x4AA6630")]
	public GraphicsBuffer(Target target, int count, int stride)
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4AA6970", Offset = "0x4AA6970", VA = "0x4AA6970")]
	public GraphicsBuffer(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4AA6670", Offset = "0x4AA6670", VA = "0x4AA6670")]
	private void InternalInitialization(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4AA69B0", Offset = "0x4AA69B0", VA = "0x4AA69B0")]
	public void Release()
	{
	}

	[Token(Token = "0x60004E1")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4AA6A20", Offset = "0x4AA6A20", VA = "0x4AA6A20")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4AA6AC0", Offset = "0x4AA6AC0", VA = "0x4AA6AC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::SetName", HasExplicitThis = true)]
	private extern void SetName(string name);
}

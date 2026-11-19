// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AsyncInstantiateOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200016C")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/AsyncInstantiate/AsyncInstantiateOperation.h")]
public class AsyncInstantiateOperation : AsyncOperation
{
	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static CancellationTokenSource s_GlobalCancellation;

	[Token(Token = "0x40005BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Object[] m_Result;

	[Token(Token = "0x40005BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private CancellationToken m_CancellationToken;

	[Token(Token = "0x40005C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CancellationTokenSource m_LinkedCancellation;

	[Token(Token = "0x1700021C")]
	public Object[] Result
	{
		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x690FFC0", Offset = "0x690EFC0", VA = "0x690FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x690FFD0", Offset = "0x690EFD0", VA = "0x690FFD0")]
	protected AsyncInstantiateOperation(IntPtr ptr, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x6910280", Offset = "0x690F280", VA = "0x6910280")]
	private void DisposeLinkedCancellation(AsyncOperation _)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x69102B0", Offset = "0x690F2B0", VA = "0x69102B0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private bool IsCancellationRequested()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x6910300", Offset = "0x690F300", VA = "0x6910300", Slot = "4")]
	internal virtual Object[] CreateResultArray(int size)
	{
		return null;
	}
}
[Token(Token = "0x200016D")]
public class AsyncInstantiateOperation<T> : AsyncInstantiateOperation
{
	[Token(Token = "0x1700021D")]
	public new T[] Result
	{
		[Token(Token = "0x6000CAD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CAC")]
	internal AsyncInstantiateOperation(IntPtr ptr, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000CAE")]
	internal override Object[] CreateResultArray(int size)
	{
		return null;
	}
}

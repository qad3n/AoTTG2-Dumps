// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AsyncInstantiateOperation
// Update status: NEW in this game update
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
[Token(Token = "0x200016B")]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/AsyncInstantiate/AsyncInstantiateOperation.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AsyncInstantiateOperation : AsyncOperation
{
	[Token(Token = "0x40005B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static CancellationTokenSource s_GlobalCancellation;

	[Token(Token = "0x40005B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Object[] m_Result;

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private CancellationToken m_CancellationToken;

	[Token(Token = "0x40005BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CancellationTokenSource m_LinkedCancellation;

	[Token(Token = "0x17000217")]
	public Object[] Result
	{
		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x2F0EB30", Offset = "0x2F0D130", VA = "0x182F0EB30")]
	protected AsyncInstantiateOperation(IntPtr ptr, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x2F0EA20", Offset = "0x2F0D020", VA = "0x182F0EA20")]
	private void DisposeLinkedCancellation(AsyncOperation _)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x2F0EA60", Offset = "0x2F0D060", VA = "0x182F0EA60")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private bool IsCancellationRequested()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x2F0E9C0", Offset = "0x2F0CFC0", VA = "0x182F0E9C0", Slot = "4")]
	internal virtual Object[] CreateResultArray(int size)
	{
		return null;
	}
}
[Token(Token = "0x200016C")]
public class AsyncInstantiateOperation<T> : AsyncInstantiateOperation
{
	[Token(Token = "0x17000218")]
	public new T[] Result
	{
		[Token(Token = "0x6000C9B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C9A")]
	internal AsyncInstantiateOperation(IntPtr ptr, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000C9C")]
	internal override Object[] CreateResultArray(int size)
	{
		return null;
	}
}

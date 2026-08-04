// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AsyncOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200013E")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/AsyncOperation.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/AsyncOperation.h")]
public class AsyncOperation : YieldInstruction
{
	[Token(Token = "0x4000534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Action<AsyncOperation> m_completeCallback;

	[Token(Token = "0x170001B0")]
	public extern bool isDone
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096C")]
		[Address(RVA = "0x4DF2E80", Offset = "0x4DF2E80", VA = "0x4DF2E80")]
		[UnityEngine.Bindings.NativeMethod("IsDone")]
		get;
	}

	[Token(Token = "0x170001B1")]
	public extern float progress
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096D")]
		[Address(RVA = "0x4DF2EB0", Offset = "0x4DF2EB0", VA = "0x4DF2EB0")]
		[UnityEngine.Bindings.NativeMethod("GetProgress")]
		get;
	}

	[Token(Token = "0x170001B2")]
	public extern bool allowSceneActivation
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x4DF2EE0", Offset = "0x4DF2EE0", VA = "0x4DF2EE0")]
		[UnityEngine.Bindings.NativeMethod("SetAllowSceneActivation")]
		set;
	}

	[Token(Token = "0x14000002")]
	public event Action<AsyncOperation> completed
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x4DF3020", Offset = "0x4DF3020", VA = "0x4DF3020")]
		add
		{
		}
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x4DF3130", Offset = "0x4DF3130", VA = "0x4DF3130")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4DF2E50", Offset = "0x4DF2E50", VA = "0x4DF2E50")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x4DF2F20", Offset = "0x4DF2F20", VA = "0x4DF2F20", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x4DF2FE0", Offset = "0x4DF2FE0", VA = "0x4DF2FE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void InvokeCompletionEvent()
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x4DF2710", Offset = "0x4DF2710", VA = "0x4DF2710")]
	public AsyncOperation()
	{
	}
}

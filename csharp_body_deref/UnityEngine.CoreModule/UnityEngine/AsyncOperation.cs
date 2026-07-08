using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200013B")]
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

	[Token(Token = "0x170001AF")]
	public extern bool isDone
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x4ACB550", Offset = "0x4ACB550", VA = "0x4ACB550")]
		[UnityEngine.Bindings.NativeMethod("IsDone")]
		get;
	}

	[Token(Token = "0x170001B0")]
	public extern float progress
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096B")]
		[Address(RVA = "0x4ACB580", Offset = "0x4ACB580", VA = "0x4ACB580")]
		[UnityEngine.Bindings.NativeMethod("GetProgress")]
		get;
	}

	[Token(Token = "0x170001B1")]
	public extern bool allowSceneActivation
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600096C")]
		[Address(RVA = "0x4ACB5B0", Offset = "0x4ACB5B0", VA = "0x4ACB5B0")]
		[UnityEngine.Bindings.NativeMethod("SetAllowSceneActivation")]
		set;
	}

	[Token(Token = "0x14000002")]
	public event Action<AsyncOperation> completed
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x4ACB6F0", Offset = "0x4ACB6F0", VA = "0x4ACB6F0")]
		add
		{
		}
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x4ACB800", Offset = "0x4ACB800", VA = "0x4ACB800")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000969")]
	[Address(RVA = "0x4ACB520", Offset = "0x4ACB520", VA = "0x4ACB520")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x4ACB5F0", Offset = "0x4ACB5F0", VA = "0x4ACB5F0", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x4ACB6B0", Offset = "0x4ACB6B0", VA = "0x4ACB6B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void InvokeCompletionEvent()
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x4ACADE0", Offset = "0x4ACADE0", VA = "0x4ACADE0")]
	public AsyncOperation()
	{
	}
}

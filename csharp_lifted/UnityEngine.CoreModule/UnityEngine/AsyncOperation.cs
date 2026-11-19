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
[Token(Token = "0x200016F")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/AsyncOperation.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/AsyncOperation.h")]
public class AsyncOperation : YieldInstruction
{
	[Token(Token = "0x2000170")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x690FE40", Offset = "0x690EE40", VA = "0x690FE40")]
		public static AsyncOperation ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x69107C0", Offset = "0x690F7C0", VA = "0x69107C0")]
		public static IntPtr ConvertToNative(AsyncOperation asyncOperation)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40005C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40005C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Action<AsyncOperation> m_completeCallback;

	[Token(Token = "0x1700021E")]
	public bool isDone
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x6910460", Offset = "0x690F460", VA = "0x6910460")]
		[UnityEngine.Bindings.NativeMethod("IsDone")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021F")]
	public float progress
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x69104F0", Offset = "0x690F4F0", VA = "0x69104F0")]
		[UnityEngine.Bindings.NativeMethod("GetProgress")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000220")]
	public bool allowSceneActivation
	{
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x6910580", Offset = "0x690F580", VA = "0x6910580")]
		[UnityEngine.Bindings.NativeMethod("SetAllowSceneActivation")]
		set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<AsyncOperation> completed
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x6910150", Offset = "0x690F150", VA = "0x6910150")]
		add
		{
		}
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x6910720", Offset = "0x690F720", VA = "0x6910720")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x69103E0", Offset = "0x690F3E0", VA = "0x69103E0")]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void InternalDestroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x6910410", Offset = "0x690F410", VA = "0x6910410")]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void InternalSetManagedObject(IntPtr ptr, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] AsyncOperation self);

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x690E950", Offset = "0x690D950", VA = "0x690E950")]
	protected AsyncOperation(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x6910620", Offset = "0x690F620", VA = "0x6910620", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x69106D0", Offset = "0x690F6D0", VA = "0x69106D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void InvokeCompletionEvent()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x69104C0", Offset = "0x690F4C0", VA = "0x69104C0")]
	private static extern bool get_isDone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x6910550", Offset = "0x690F550", VA = "0x6910550")]
	private static extern float get_progress_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x69105E0", Offset = "0x690F5E0", VA = "0x69105E0")]
	private static extern void set_allowSceneActivation_Injected(IntPtr _unity_self, bool value);
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AsyncOperation
// Update status: CHANGED in this game update
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
[Token(Token = "0x200016E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/AsyncOperation.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/AsyncOperation.bindings.h")]
public class AsyncOperation : YieldInstruction
{
	[Token(Token = "0x200016F")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x2F12C10", Offset = "0x2F11210", VA = "0x182F12C10")]
		public static AsyncOperation ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(AsyncOperation asyncOperation)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40005BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Action<AsyncOperation> m_completeCallback;

	[Token(Token = "0x17000219")]
	public bool isDone
	{
		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x2F0F1B0", Offset = "0x2F0D7B0", VA = "0x182F0F1B0")]
		[UnityEngine.Bindings.NativeMethod("IsDone")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	public float progress
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x2F0F250", Offset = "0x2F0D850", VA = "0x182F0F250")]
		[UnityEngine.Bindings.NativeMethod("GetProgress")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700021B")]
	public bool allowSceneActivation
	{
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x2F0F3B0", Offset = "0x2F0D9B0", VA = "0x182F0F3B0")]
		[UnityEngine.Bindings.NativeMethod("SetAllowSceneActivation")]
		set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<AsyncOperation> completed
	{
		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x2F0F040", Offset = "0x2F0D640", VA = "0x182F0F040")]
		add
		{
		}
		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x2F0F2B0", Offset = "0x2F0D8B0", VA = "0x182F0F2B0")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x2F0EF10", Offset = "0x2F0D510", VA = "0x182F0EF10")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void InternalDestroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x2F0EF50", Offset = "0x2F0D550", VA = "0x182F0EF50")]
	[UnityEngine.Bindings.StaticAccessor("AsyncOperationBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void InternalSetManagedObject(IntPtr ptr, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] AsyncOperation self);

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x2F0EFE0", Offset = "0x2F0D5E0", VA = "0x182F0EFE0")]
	protected AsyncOperation(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x2F0EE90", Offset = "0x2F0D490", VA = "0x182F0EE90", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x2F0EFA0", Offset = "0x2F0D5A0", VA = "0x182F0EFA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void InvokeCompletionEvent()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x2F0F170", Offset = "0x2F0D770", VA = "0x182F0F170")]
	private static extern bool get_isDone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x2F0F210", Offset = "0x2F0D810", VA = "0x182F0F210")]
	private static extern float get_progress_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x2F0F360", Offset = "0x2F0D960", VA = "0x182F0F360")]
	private static extern void set_allowSceneActivation_Injected(IntPtr _unity_self, bool value);
}

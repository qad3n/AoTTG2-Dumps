// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.UploadHandler
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

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000013")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandler.h")]
public class UploadHandler : IDisposable
{
	[Token(Token = "0x2000014")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(UploadHandler uploadHandler)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000016")]
	public string contentType
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x19C4B60", Offset = "0x19C3160", VA = "0x1819C4B60")]
		set
		{
		}
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x330DAD0", Offset = "0x330C0D0", VA = "0x18330DAD0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal UploadHandler()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3309980", Offset = "0x3307F80", VA = "0x183309980", Slot = "1")]
	~UploadHandler()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x330D840", Offset = "0x330BE40", VA = "0x18330D840", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x330DB30", Offset = "0x330C130", VA = "0x18330DB30", Slot = "6")]
	internal virtual void SetContentType(string newContentType)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x330D8E0", Offset = "0x330BEE0", VA = "0x18330D8E0")]
	[UnityEngine.Bindings.NativeMethod("SetContentType")]
	private void InternalSetContentType(string newContentType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x330DA90", Offset = "0x330C090", VA = "0x18330DA90")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x330D890", Offset = "0x330BE90", VA = "0x18330D890")]
	private static extern void InternalSetContentType_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper newContentType);
}

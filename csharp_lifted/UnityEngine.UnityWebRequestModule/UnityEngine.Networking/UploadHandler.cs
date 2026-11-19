// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.UploadHandler
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

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000013")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandler.h")]
public class UploadHandler : IDisposable
{
	[Token(Token = "0x2000014")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x6D1F5E0", Offset = "0x6D1E5E0", VA = "0x6D1F5E0")]
		public static IntPtr ConvertToNative(UploadHandler uploadHandler)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000015")]
	public string contentType
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x6D1F0E0", Offset = "0x6D1E0E0", VA = "0x6D1F0E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x6D1F260", Offset = "0x6D1E260", VA = "0x6D1F260")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6D1F2F0", Offset = "0x6D1E2F0", VA = "0x6D1F2F0")]
	internal UploadHandler()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6D1F300", Offset = "0x6D1E300", VA = "0x6D1F300", Slot = "1")]
	~UploadHandler()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6D1F3A0", Offset = "0x6D1E3A0", VA = "0x6D1F3A0", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6D1F3F0", Offset = "0x6D1E3F0", VA = "0x6D1F3F0", Slot = "6")]
	internal virtual void SetContentType(string newContentType)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6D1F400", Offset = "0x6D1E400", VA = "0x6D1F400")]
	[UnityEngine.Bindings.NativeMethod("SetContentType")]
	private void InternalSetContentType(string newContentType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6D1F2C0", Offset = "0x6D1E2C0", VA = "0x6D1F2C0")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6D1F5A0", Offset = "0x6D1E5A0", VA = "0x6D1F5A0")]
	private static extern void InternalSetContentType_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper newContentType);
}

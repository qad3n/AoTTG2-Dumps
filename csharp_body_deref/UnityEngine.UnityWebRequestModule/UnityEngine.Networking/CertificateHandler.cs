// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.CertificateHandler
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

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/CertificateHandler/CertificateHandlerScript.h")]
public class CertificateHandler
{
	[Token(Token = "0x2000006")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6D1B060", Offset = "0x6D1A060", VA = "0x6D1B060")]
		public static IntPtr ConvertToNative(CertificateHandler handler)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6D1AF50", Offset = "0x6D19F50", VA = "0x6D1AF50")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6D1AFE0", Offset = "0x6D19FE0", VA = "0x6D1AFE0", Slot = "4")]
	protected virtual bool ValidateCertificate(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6D1AFF0", Offset = "0x6D19FF0", VA = "0x6D1AFF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal bool ValidateCertificateNative(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6D1B010", Offset = "0x6D1A010", VA = "0x6D1B010", Slot = "5")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x6D1AFB0", Offset = "0x6D19FB0", VA = "0x6D1AFB0")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);
}

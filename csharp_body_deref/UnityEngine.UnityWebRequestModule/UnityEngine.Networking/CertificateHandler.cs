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
	[NonSerialized]
	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x51061F0", Offset = "0x51061F0", VA = "0x51061F0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5106220", Offset = "0x5106220", VA = "0x5106220", Slot = "4")]
	protected virtual bool ValidateCertificate(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5106230", Offset = "0x5106230", VA = "0x5106230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal bool ValidateCertificateNative(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5106250", Offset = "0x5106250", VA = "0x5106250", Slot = "5")]
	public void Dispose()
	{
	}
}

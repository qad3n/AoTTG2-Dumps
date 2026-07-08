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
	[Address(RVA = "0x4DDE8A0", Offset = "0x4DDE8A0", VA = "0x4DDE8A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4DDE8D0", Offset = "0x4DDE8D0", VA = "0x4DDE8D0", Slot = "4")]
	protected virtual bool ValidateCertificate(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4DDE8E0", Offset = "0x4DDE8E0", VA = "0x4DDE8E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal bool ValidateCertificateNative(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4DDE900", Offset = "0x4DDE900", VA = "0x4DDE900", Slot = "5")]
	public void Dispose()
	{
	}
}

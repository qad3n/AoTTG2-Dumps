// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.CertificateHandler
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
	[Address(RVA = "0x33090D0", Offset = "0x33076D0", VA = "0x1833090D0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "4")]
	protected virtual bool ValidateCertificate(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3309130", Offset = "0x3307730", VA = "0x183309130")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal bool ValidateCertificateNative(byte[] certificateData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3309040", Offset = "0x3307640", VA = "0x183309040", Slot = "5")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3309090", Offset = "0x3307690", VA = "0x183309090")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);
}

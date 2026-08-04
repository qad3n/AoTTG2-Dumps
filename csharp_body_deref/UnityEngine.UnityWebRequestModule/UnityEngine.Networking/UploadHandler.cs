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
[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandler.h")]
public class UploadHandler : IDisposable
{
	[NonSerialized]
	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000014")]
	public string contentType
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x5108C40", Offset = "0x5108C40", VA = "0x5108C40")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5108DA0", Offset = "0x5108DA0", VA = "0x5108DA0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5108DD0", Offset = "0x5108DD0", VA = "0x5108DD0")]
	internal UploadHandler()
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5108DE0", Offset = "0x5108DE0", VA = "0x5108DE0", Slot = "1")]
	~UploadHandler()
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5108E70", Offset = "0x5108E70", VA = "0x5108E70", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5108EB0", Offset = "0x5108EB0", VA = "0x5108EB0", Slot = "6")]
	internal virtual void SetContentType(string newContentType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5108EF0", Offset = "0x5108EF0", VA = "0x5108EF0")]
	[UnityEngine.Bindings.NativeMethod("SetContentType")]
	private extern void InternalSetContentType(string newContentType);
}

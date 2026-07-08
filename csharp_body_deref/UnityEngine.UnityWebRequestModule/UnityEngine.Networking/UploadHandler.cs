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

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4DE0F90", Offset = "0x4DE0F90", VA = "0x4DE0F90")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4DE0FC0", Offset = "0x4DE0FC0", VA = "0x4DE0FC0")]
	internal UploadHandler()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4DE0FD0", Offset = "0x4DE0FD0", VA = "0x4DE0FD0", Slot = "1")]
	~UploadHandler()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4DE1060", Offset = "0x4DE1060", VA = "0x4DE1060", Slot = "5")]
	public virtual void Dispose()
	{
	}
}

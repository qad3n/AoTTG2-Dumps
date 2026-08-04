// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.NativeEventCalls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Threading;

[Token(Token = "0x2000218")]
internal static class NativeEventCalls
{
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x3D3BBF0", Offset = "0x3D3BBF0", VA = "0x3D3BBF0")]
	public static IntPtr CreateEvent_internal(bool manual, bool initial, string name, out int errorCode)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600133C")]
	[Address(RVA = "0x3D3BC40", Offset = "0x3D3BC40", VA = "0x3D3BC40")]
	private unsafe static extern IntPtr CreateEvent_icall(bool manual, bool initial, char* name, int name_length, out int errorCode);

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x3D3BC50", Offset = "0x3D3BC50", VA = "0x3D3BC50")]
	public static bool SetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600133E")]
	[Address(RVA = "0x3D3BD30", Offset = "0x3D3BD30", VA = "0x3D3BD30")]
	private static extern bool SetEvent_internal(IntPtr handle);

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x3D3BD40", Offset = "0x3D3BD40", VA = "0x3D3BD40")]
	public static bool ResetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001340")]
	[Address(RVA = "0x3D3BE20", Offset = "0x3D3BE20", VA = "0x3D3BE20")]
	private static extern bool ResetEvent_internal(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001341")]
	[Address(RVA = "0x3D3BE30", Offset = "0x3D3BE30", VA = "0x3D3BE30")]
	public static extern void CloseEvent_internal(IntPtr handle);
}

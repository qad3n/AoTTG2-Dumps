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

[Token(Token = "0x2000221")]
internal static class NativeEventCalls
{
	[Token(Token = "0x6001383")]
	[Address(RVA = "0x553E580", Offset = "0x553D580", VA = "0x553E580")]
	public static IntPtr CreateEvent_internal(bool manual, bool initial, string name, out int errorCode)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001384")]
	[Address(RVA = "0x553E5D0", Offset = "0x553D5D0", VA = "0x553E5D0")]
	private unsafe static extern IntPtr CreateEvent_icall(bool manual, bool initial, char* name, int name_length, out int errorCode);

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x553E5E0", Offset = "0x553D5E0", VA = "0x553E5E0")]
	public static bool SetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001386")]
	[Address(RVA = "0x553E6C0", Offset = "0x553D6C0", VA = "0x553E6C0")]
	private static extern bool SetEvent_internal(IntPtr handle);

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x553E6D0", Offset = "0x553D6D0", VA = "0x553E6D0")]
	public static bool ResetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001388")]
	[Address(RVA = "0x553E7B0", Offset = "0x553D7B0", VA = "0x553E7B0")]
	private static extern bool ResetEvent_internal(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001389")]
	[Address(RVA = "0x553E7C0", Offset = "0x553D7C0", VA = "0x553E7C0")]
	public static extern void CloseEvent_internal(IntPtr handle);
}

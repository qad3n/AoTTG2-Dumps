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

[Token(Token = "0x2000249")]
internal static class NativeEventCalls
{
	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x1BB0BF0", Offset = "0x1BAF1F0", VA = "0x181BB0BF0")]
	public static IntPtr CreateEvent_internal(bool manual, bool initial, string name, out int errorCode)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x1BB0BE0", Offset = "0x1BAF1E0", VA = "0x181BB0BE0")]
	private unsafe static extern IntPtr CreateEvent_icall(bool manual, bool initial, char* name, int name_length, out int errorCode);

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x1BB0D30", Offset = "0x1BAF330", VA = "0x181BB0D30")]
	public static bool SetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x1BB0D20", Offset = "0x1BAF320", VA = "0x181BB0D20")]
	private static extern bool SetEvent_internal(IntPtr handle);

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x1BB0C50", Offset = "0x1BAF250", VA = "0x181BB0C50")]
	public static bool ResetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x1BB0C40", Offset = "0x1BAF240", VA = "0x181BB0C40")]
	private static extern bool ResetEvent_internal(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x1BB0BD0", Offset = "0x1BAF1D0", VA = "0x181BB0BD0")]
	public static extern void CloseEvent_internal(IntPtr handle);
}

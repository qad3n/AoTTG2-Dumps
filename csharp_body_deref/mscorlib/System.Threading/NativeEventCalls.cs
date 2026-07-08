using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Threading;

[Token(Token = "0x2000218")]
internal static class NativeEventCalls
{
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x50560D0", Offset = "0x50560D0", VA = "0x50560D0")]
	public static IntPtr CreateEvent_internal(bool manual, bool initial, string name, out int errorCode)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600133C")]
	[Address(RVA = "0x5056120", Offset = "0x5056120", VA = "0x5056120")]
	private unsafe static extern IntPtr CreateEvent_icall(bool manual, bool initial, char* name, int name_length, out int errorCode);

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x5056130", Offset = "0x5056130", VA = "0x5056130")]
	public static bool SetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600133E")]
	[Address(RVA = "0x5056210", Offset = "0x5056210", VA = "0x5056210")]
	private static extern bool SetEvent_internal(IntPtr handle);

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x5056220", Offset = "0x5056220", VA = "0x5056220")]
	public static bool ResetEvent(SafeWaitHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001340")]
	[Address(RVA = "0x5056300", Offset = "0x5056300", VA = "0x5056300")]
	private static extern bool ResetEvent_internal(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001341")]
	[Address(RVA = "0x5056310", Offset = "0x5056310", VA = "0x5056310")]
	public static extern void CloseEvent_internal(IntPtr handle);
}

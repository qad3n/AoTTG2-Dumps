using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Microsoft.Win32;

[Token(Token = "0x2000071")]
internal static class NativeMethods
{
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x454A3C0", Offset = "0x454A3C0", VA = "0x454A3C0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, SafeHandle hSourceHandle, HandleRef hTargetProcess, out SafeWaitHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x454A5F0", Offset = "0x454A5F0", VA = "0x454A5F0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, HandleRef hSourceHandle, HandleRef hTargetProcess, out SafeProcessHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x454A750", Offset = "0x454A750", VA = "0x454A750")]
	public static extern IntPtr GetCurrentProcess();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x454A760", Offset = "0x454A760", VA = "0x454A760")]
	public static extern bool GetExitCodeProcess(IntPtr processHandle, out int exitCode);

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x454A770", Offset = "0x454A770", VA = "0x454A770")]
	public static bool GetExitCodeProcess(SafeProcessHandle processHandle, out int exitCode)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x454A860", Offset = "0x454A860", VA = "0x454A860")]
	public static extern int GetCurrentProcessId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x454A870", Offset = "0x454A870", VA = "0x454A870")]
	public static extern bool CloseProcess(IntPtr handle);
}

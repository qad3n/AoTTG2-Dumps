// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.NativeMethods
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x45305B0", Offset = "0x45305B0", VA = "0x45305B0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, SafeHandle hSourceHandle, HandleRef hTargetProcess, out SafeWaitHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x45307E0", Offset = "0x45307E0", VA = "0x45307E0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, HandleRef hSourceHandle, HandleRef hTargetProcess, out SafeProcessHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4530940", Offset = "0x4530940", VA = "0x4530940")]
	public static extern IntPtr GetCurrentProcess();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4530950", Offset = "0x4530950", VA = "0x4530950")]
	public static extern bool GetExitCodeProcess(IntPtr processHandle, out int exitCode);

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4530960", Offset = "0x4530960", VA = "0x4530960")]
	public static bool GetExitCodeProcess(SafeProcessHandle processHandle, out int exitCode)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4530A50", Offset = "0x4530A50", VA = "0x4530A50")]
	public static extern int GetCurrentProcessId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4530A60", Offset = "0x4530A60", VA = "0x4530A60")]
	public static extern bool CloseProcess(IntPtr handle);
}

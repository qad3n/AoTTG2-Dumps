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
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5E43BC0", Offset = "0x5E42BC0", VA = "0x5E43BC0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, HandleRef hSourceHandle, HandleRef hTargetProcess, out SafeProcessHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5E43D20", Offset = "0x5E42D20", VA = "0x5E43D20")]
	public static extern IntPtr GetCurrentProcess();

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x5E43D30", Offset = "0x5E42D30", VA = "0x5E43D30")]
	public static extern bool GetExitCodeProcess(IntPtr processHandle, out int exitCode);

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5E43D40", Offset = "0x5E42D40", VA = "0x5E43D40")]
	public static bool GetExitCodeProcess(SafeProcessHandle processHandle, out int exitCode)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5E43E30", Offset = "0x5E42E30", VA = "0x5E43E30")]
	public static extern int GetCurrentProcessId();

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x5E43E40", Offset = "0x5E42E40", VA = "0x5E43E40")]
	public static extern bool CloseProcess(IntPtr handle);
}

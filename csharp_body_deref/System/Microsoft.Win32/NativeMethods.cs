// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.NativeMethods
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000AA")]
internal static class NativeMethods
{
	[Token(Token = "0x600032E")]
	[Address(RVA = "0x283E2F0", Offset = "0x283C8F0", VA = "0x18283E2F0")]
	public static bool DuplicateHandle(HandleRef hSourceProcessHandle, HandleRef hSourceHandle, HandleRef hTargetProcess, out SafeProcessHandle targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600032F")]
	[Address(RVA = "0x283E450", Offset = "0x283CA50", VA = "0x18283E450")]
	public static extern IntPtr GetCurrentProcess();

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x283E530", Offset = "0x283CB30", VA = "0x18283E530")]
	public static extern bool GetExitCodeProcess(IntPtr processHandle, out int exitCode);

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x283E460", Offset = "0x283CA60", VA = "0x18283E460")]
	public static bool GetExitCodeProcess(SafeProcessHandle processHandle, out int exitCode)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000332")]
	[Address(RVA = "0x283E440", Offset = "0x283CA40", VA = "0x18283E440")]
	public static extern int GetCurrentProcessId();

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000333")]
	[Address(RVA = "0x283E2E0", Offset = "0x283C8E0", VA = "0x18283E2E0")]
	public static extern bool CloseProcess(IntPtr handle);
}

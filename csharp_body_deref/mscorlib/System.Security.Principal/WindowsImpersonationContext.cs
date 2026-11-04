// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Principal.WindowsImpersonationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Principal;

[Token(Token = "0x200035E")]
[ComVisible(true)]
public class WindowsImpersonationContext : IDisposable
{
	[Token(Token = "0x4000E57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr _token;

	[Token(Token = "0x4000E58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool undo;

	[Token(Token = "0x6001C43")]
	[Address(RVA = "0x19E99A0", Offset = "0x19E7FA0", VA = "0x1819E99A0")]
	internal WindowsImpersonationContext(IntPtr token)
	{
	}

	[Token(Token = "0x6001C44")]
	[Address(RVA = "0x19E9800", Offset = "0x19E7E00", VA = "0x1819E9800", Slot = "4")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C45")]
	[Address(RVA = "0x19E98F0", Offset = "0x19E7EF0", VA = "0x1819E98F0")]
	public void Undo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C46")]
	[Address(RVA = "0x19E97F0", Offset = "0x19E7DF0", VA = "0x1819E97F0")]
	private static extern bool CloseToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C47")]
	[Address(RVA = "0x19E98C0", Offset = "0x19E7EC0", VA = "0x1819E98C0")]
	private static extern IntPtr DuplicateToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C48")]
	[Address(RVA = "0x19E98E0", Offset = "0x19E7EE0", VA = "0x1819E98E0")]
	private static extern bool SetCurrentToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C49")]
	[Address(RVA = "0x19E98D0", Offset = "0x19E7ED0", VA = "0x1819E98D0")]
	private static extern bool RevertToSelf();
}

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

[Token(Token = "0x200032F")]
[ComVisible(true)]
public class WindowsImpersonationContext : IDisposable
{
	[Token(Token = "0x4000E4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr _token;

	[Token(Token = "0x4000E4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool undo;

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x3B5ACF0", Offset = "0x3B5ACF0", VA = "0x3B5ACF0")]
	internal WindowsImpersonationContext(IntPtr token)
	{
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x3B5B2C0", Offset = "0x3B5B2C0", VA = "0x3B5B2C0", Slot = "4")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x3B5B2D0", Offset = "0x3B5B2D0", VA = "0x3B5B2D0")]
	public void Undo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD8")]
	[Address(RVA = "0x3B5B390", Offset = "0x3B5B390", VA = "0x3B5B390")]
	private static extern bool CloseToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x3B5B2A0", Offset = "0x3B5B2A0", VA = "0x3B5B2A0")]
	private static extern IntPtr DuplicateToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x3B5B2B0", Offset = "0x3B5B2B0", VA = "0x3B5B2B0")]
	private static extern bool SetCurrentToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x3B5B380", Offset = "0x3B5B380", VA = "0x3B5B380")]
	private static extern bool RevertToSelf();
}

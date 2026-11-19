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

[Token(Token = "0x2000337")]
[ComVisible(true)]
public class WindowsImpersonationContext : IDisposable
{
	[Token(Token = "0x4000DB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr _token;

	[Token(Token = "0x4000DB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool undo;

	[Token(Token = "0x6001C1A")]
	[Address(RVA = "0x5364960", Offset = "0x5363960", VA = "0x5364960")]
	internal WindowsImpersonationContext(IntPtr token)
	{
	}

	[Token(Token = "0x6001C1B")]
	[Address(RVA = "0x5364F30", Offset = "0x5363F30", VA = "0x5364F30", Slot = "4")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C1C")]
	[Address(RVA = "0x5364F40", Offset = "0x5363F40", VA = "0x5364F40")]
	public void Undo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C1D")]
	[Address(RVA = "0x5365000", Offset = "0x5364000", VA = "0x5365000")]
	private static extern bool CloseToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x5364F10", Offset = "0x5363F10", VA = "0x5364F10")]
	private static extern IntPtr DuplicateToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C1F")]
	[Address(RVA = "0x5364F20", Offset = "0x5363F20", VA = "0x5364F20")]
	private static extern bool SetCurrentToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C20")]
	[Address(RVA = "0x5364FF0", Offset = "0x5363FF0", VA = "0x5364FF0")]
	private static extern bool RevertToSelf();
}

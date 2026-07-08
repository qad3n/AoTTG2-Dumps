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
	[Address(RVA = "0x4E751D0", Offset = "0x4E751D0", VA = "0x4E751D0")]
	internal WindowsImpersonationContext(IntPtr token)
	{
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x4E757A0", Offset = "0x4E757A0", VA = "0x4E757A0", Slot = "4")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x4E757B0", Offset = "0x4E757B0", VA = "0x4E757B0")]
	public void Undo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD8")]
	[Address(RVA = "0x4E75870", Offset = "0x4E75870", VA = "0x4E75870")]
	private static extern bool CloseToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x4E75780", Offset = "0x4E75780", VA = "0x4E75780")]
	private static extern IntPtr DuplicateToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x4E75790", Offset = "0x4E75790", VA = "0x4E75790")]
	private static extern bool SetCurrentToken(IntPtr token);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x4E75860", Offset = "0x4E75860", VA = "0x4E75860")]
	private static extern bool RevertToSelf();
}

using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CF")]
public class RefreshEventArgs : EventArgs
{
	[Token(Token = "0x17000422")]
	public object ComponentChanged
	{
		[Token(Token = "0x600125A")]
		[Address(RVA = "0x4584BE0", Offset = "0x4584BE0", VA = "0x4584BE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000423")]
	public Type TypeChanged
	{
		[Token(Token = "0x600125B")]
		[Address(RVA = "0x4584BF0", Offset = "0x4584BF0", VA = "0x4584BF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x4584AE0", Offset = "0x4584AE0", VA = "0x4584AE0")]
	public RefreshEventArgs(object componentChanged)
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x4584B70", Offset = "0x4584B70", VA = "0x4584B70")]
	public RefreshEventArgs(Type typeChanged)
	{
	}
}

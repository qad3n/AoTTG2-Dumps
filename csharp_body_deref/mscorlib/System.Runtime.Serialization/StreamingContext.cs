using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003F1")]
[ComVisible(true)]
public readonly struct StreamingContext
{
	[Token(Token = "0x400102C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object m_additionalContext;

	[Token(Token = "0x400102D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly StreamingContextStates m_state;

	[Token(Token = "0x1700044B")]
	public object Context
	{
		[Token(Token = "0x600202C")]
		[Address(RVA = "0x4EBAFD0", Offset = "0x4EBAFD0", VA = "0x4EBAFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	public StreamingContextStates State
	{
		[Token(Token = "0x600202F")]
		[Address(RVA = "0x4EBB070", Offset = "0x4EBB070", VA = "0x4EBB070")]
		get
		{
			return default(StreamingContextStates);
		}
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x4EBAFA0", Offset = "0x4EBAFA0", VA = "0x4EBAFA0")]
	public StreamingContext(StreamingContextStates state)
	{
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x4EBAFC0", Offset = "0x4EBAFC0", VA = "0x4EBAFC0")]
	public StreamingContext(StreamingContextStates state, object additional)
	{
	}

	[Token(Token = "0x600202D")]
	[Address(RVA = "0x4EBAFE0", Offset = "0x4EBAFE0", VA = "0x4EBAFE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600202E")]
	[Address(RVA = "0x4EBB060", Offset = "0x4EBB060", VA = "0x4EBB060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

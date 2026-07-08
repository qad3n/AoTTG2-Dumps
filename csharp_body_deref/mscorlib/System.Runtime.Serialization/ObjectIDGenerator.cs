using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003DE")]
[ComVisible(true)]
public class ObjectIDGenerator
{
	[Token(Token = "0x4000FE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentCount;

	[Token(Token = "0x4000FE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int m_currentSize;

	[Token(Token = "0x4000FE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal long[] m_ids;

	[Token(Token = "0x4000FEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object[] m_objs;

	[Token(Token = "0x4000FEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] sizes;

	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x4EB26C0", Offset = "0x4EB26C0", VA = "0x4EB26C0")]
	public ObjectIDGenerator()
	{
	}

	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x4EB27A0", Offset = "0x4EB27A0", VA = "0x4EB27A0")]
	private int FindElement(object obj, out bool found)
	{
		return default(int);
	}

	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x4EB28C0", Offset = "0x4EB28C0", VA = "0x4EB28C0", Slot = "4")]
	public virtual long GetId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x4EB30E0", Offset = "0x4EB30E0", VA = "0x4EB30E0", Slot = "5")]
	public virtual long HasId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x4EB2B10", Offset = "0x4EB2B10", VA = "0x4EB2B10")]
	private void Rehash()
	{
	}
}

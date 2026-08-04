// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectIDGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B981E0", Offset = "0x3B981E0", VA = "0x3B981E0")]
	public ObjectIDGenerator()
	{
	}

	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x3B982C0", Offset = "0x3B982C0", VA = "0x3B982C0")]
	private int FindElement(object obj, out bool found)
	{
		return default(int);
	}

	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x3B983E0", Offset = "0x3B983E0", VA = "0x3B983E0", Slot = "4")]
	public virtual long GetId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x3B98C00", Offset = "0x3B98C00", VA = "0x3B98C00", Slot = "5")]
	public virtual long HasId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x3B98630", Offset = "0x3B98630", VA = "0x3B98630")]
	private void Rehash()
	{
	}
}

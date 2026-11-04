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
[Token(Token = "0x200040D")]
[ComVisible(true)]
public class ObjectIDGenerator
{
	[Token(Token = "0x4000FED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentCount;

	[Token(Token = "0x4000FEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int m_currentSize;

	[Token(Token = "0x4000FEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal long[] m_ids;

	[Token(Token = "0x4000FF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object[] m_objs;

	[Token(Token = "0x4000FF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] sizes;

	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x1A16840", Offset = "0x1A14E40", VA = "0x181A16840")]
	public ObjectIDGenerator()
	{
	}

	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x1A16150", Offset = "0x1A14750", VA = "0x181A16150")]
	private int FindElement(object obj, out bool found)
	{
		return default(int);
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x1A16220", Offset = "0x1A14820", VA = "0x181A16220", Slot = "4")]
	public virtual long GetId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x1A163C0", Offset = "0x1A149C0", VA = "0x181A163C0", Slot = "5")]
	public virtual long HasId(object obj, out bool firstTime)
	{
		return default(long);
	}

	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x1A164A0", Offset = "0x1A14AA0", VA = "0x181A164A0")]
	private void Rehash()
	{
	}
}

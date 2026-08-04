// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000427")]
internal sealed class SerStack
{
	[Token(Token = "0x40011FF")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001200")]
	[FieldOffset(Offset = "0x18")]
	internal string stackId;

	[Token(Token = "0x4001201")]
	[FieldOffset(Offset = "0x20")]
	internal int top;

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x3BB1910", Offset = "0x3BB1910", VA = "0x3BB1910")]
	internal SerStack(string stackId)
	{
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x3BB4B60", Offset = "0x3BB4B60", VA = "0x3BB4B60")]
	internal void Push(object obj)
	{
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x3BB4AF0", Offset = "0x3BB4AF0", VA = "0x3BB4AF0")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x3BBB310", Offset = "0x3BBB310", VA = "0x3BBB310")]
	internal void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x3BB9620", Offset = "0x3BB9620", VA = "0x3BB9620")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x3BB9FF0", Offset = "0x3BB9FF0", VA = "0x3BB9FF0")]
	internal object PeekPeek()
	{
		return null;
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x3BB4AE0", Offset = "0x3BB4AE0", VA = "0x3BB4AE0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200042F")]
internal sealed class SerStack
{
	[Token(Token = "0x4001161")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001162")]
	[FieldOffset(Offset = "0x18")]
	internal string stackId;

	[Token(Token = "0x4001163")]
	[FieldOffset(Offset = "0x20")]
	internal int top;

	[Token(Token = "0x60021CA")]
	[Address(RVA = "0x53B8B10", Offset = "0x53B7B10", VA = "0x53B8B10")]
	internal SerStack(string stackId)
	{
	}

	[Token(Token = "0x60021CB")]
	[Address(RVA = "0x53BC180", Offset = "0x53BB180", VA = "0x53BC180")]
	internal void Push(object obj)
	{
	}

	[Token(Token = "0x60021CC")]
	[Address(RVA = "0x53BC110", Offset = "0x53BB110", VA = "0x53BC110")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x60021CD")]
	[Address(RVA = "0x53C2AA0", Offset = "0x53C1AA0", VA = "0x53C2AA0")]
	internal void IncreaseCapacity()
	{
	}

	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x53C0D90", Offset = "0x53BFD90", VA = "0x53C0D90")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x60021CF")]
	[Address(RVA = "0x53C1770", Offset = "0x53C0770", VA = "0x53C1770")]
	internal object PeekPeek()
	{
		return null;
	}

	[Token(Token = "0x60021D0")]
	[Address(RVA = "0x53BC100", Offset = "0x53BB100", VA = "0x53BC100")]
	internal bool IsEmpty()
	{
		return default(bool);
	}
}

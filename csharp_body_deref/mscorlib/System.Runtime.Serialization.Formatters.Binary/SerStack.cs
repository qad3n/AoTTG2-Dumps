// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000456")]
internal sealed class SerStack
{
	[Token(Token = "0x4001201")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001202")]
	[FieldOffset(Offset = "0x18")]
	internal string stackId;

	[Token(Token = "0x4001203")]
	[FieldOffset(Offset = "0x20")]
	internal int top;

	[Token(Token = "0x60021F4")]
	[Address(RVA = "0x1A37790", Offset = "0x1A35D90", VA = "0x181A37790")]
	internal SerStack(string stackId)
	{
	}

	[Token(Token = "0x60021F5")]
	[Address(RVA = "0x1A37680", Offset = "0x1A35C80", VA = "0x181A37680")]
	internal void Push(object obj)
	{
	}

	[Token(Token = "0x60021F6")]
	[Address(RVA = "0x1A37600", Offset = "0x1A35C00", VA = "0x181A37600")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x60021F7")]
	[Address(RVA = "0x1A374D0", Offset = "0x1A35AD0", VA = "0x181A374D0")]
	internal void IncreaseCapacity()
	{
	}

	[Token(Token = "0x60021F8")]
	[Address(RVA = "0x1A375C0", Offset = "0x1A35BC0", VA = "0x181A375C0")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x60021F9")]
	[Address(RVA = "0x1A37580", Offset = "0x1A35B80", VA = "0x181A37580")]
	internal object PeekPeek()
	{
		return null;
	}

	[Token(Token = "0x60021FA")]
	[Address(RVA = "0x1A37570", Offset = "0x1A35B70", VA = "0x181A37570")]
	internal bool IsEmpty()
	{
		return default(bool);
	}
}

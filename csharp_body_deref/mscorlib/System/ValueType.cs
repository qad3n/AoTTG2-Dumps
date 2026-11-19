// ==================== AoTTG2 cross-reference ====================
// Type: System.ValueType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B5")]
[ComVisible(true)]
public abstract class ValueType
{
	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x5520950", Offset = "0x551F950", VA = "0x5520950")]
	protected ValueType()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x5520960", Offset = "0x551F960", VA = "0x5520960")]
	private static extern bool InternalEquals(object o1, object o2, out object[] fields);

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x5520970", Offset = "0x551F970", VA = "0x5520970")]
	internal static bool DefaultEquals(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x5520B20", Offset = "0x551FB20", VA = "0x5520B20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x5520B30", Offset = "0x551FB30", VA = "0x5520B30")]
	internal static extern int InternalGetHashCode(object o, out object[] fields);

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x5520B40", Offset = "0x551FB40", VA = "0x5520B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x5520BC0", Offset = "0x551FBC0", VA = "0x5520BC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

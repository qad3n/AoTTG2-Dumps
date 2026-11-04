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
[Token(Token = "0x20001DD")]
[ComVisible(true)]
public abstract class ValueType
{
	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ValueType()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x1BA9190", Offset = "0x1BA7790", VA = "0x181BA9190")]
	private static extern bool InternalEquals(object o1, object o2, out object[] fields);

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x1BA8F20", Offset = "0x1BA7520", VA = "0x181BA8F20")]
	internal static bool DefaultEquals(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x1B64EB0", Offset = "0x1B634B0", VA = "0x181B64EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x1BA91A0", Offset = "0x1BA77A0", VA = "0x181BA91A0")]
	internal static extern int InternalGetHashCode(object o, out object[] fields);

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x1BA90F0", Offset = "0x1BA76F0", VA = "0x181BA90F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x1BA91B0", Offset = "0x1BA77B0", VA = "0x181BA91B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

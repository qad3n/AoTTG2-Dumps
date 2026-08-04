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
[Token(Token = "0x20001B2")]
[ComVisible(true)]
public abstract class ValueType
{
	[Token(Token = "0x6001096")]
	[Address(RVA = "0x3D1D6E0", Offset = "0x3D1D6E0", VA = "0x3D1D6E0")]
	protected ValueType()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001097")]
	[Address(RVA = "0x3D1D6F0", Offset = "0x3D1D6F0", VA = "0x3D1D6F0")]
	private static extern bool InternalEquals(object o1, object o2, out object[] fields);

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x3D1D700", Offset = "0x3D1D700", VA = "0x3D1D700")]
	internal static bool DefaultEquals(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x3D1D8D0", Offset = "0x3D1D8D0", VA = "0x3D1D8D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109A")]
	[Address(RVA = "0x3D1D8E0", Offset = "0x3D1D8E0", VA = "0x3D1D8E0")]
	internal static extern int InternalGetHashCode(object o, out object[] fields);

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x3D1D8F0", Offset = "0x3D1D8F0", VA = "0x3D1D8F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x3D1D970", Offset = "0x3D1D970", VA = "0x3D1D970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

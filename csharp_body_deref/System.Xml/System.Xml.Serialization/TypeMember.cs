// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.TypeMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000113")]
internal sealed class TypeMember
{
	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x18")]
	private string member;

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal TypeMember(Type type, string member)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x2740700", Offset = "0x273ED00", VA = "0x182740700", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x2740570", Offset = "0x273EB70", VA = "0x182740570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x2740670", Offset = "0x273EC70", VA = "0x182740670")]
	public static bool Equals(TypeMember tm1, TypeMember tm2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x2740760", Offset = "0x273ED60", VA = "0x182740760", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

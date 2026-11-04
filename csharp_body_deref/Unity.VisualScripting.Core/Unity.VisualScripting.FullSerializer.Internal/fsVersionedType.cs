// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x2000224")]
public struct fsVersionedType
{
	[Token(Token = "0x40009E9")]
	[FieldOffset(Offset = "0x0")]
	public fsVersionedType[] Ancestors;

	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x8")]
	public string VersionString;

	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x10")]
	public Type ModelType;

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x2E7B7A0", Offset = "0x2E79DA0", VA = "0x182E7B7A0")]
	public object Migrate(object ancestorInstance)
	{
		return null;
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x2E7B860", Offset = "0x2E79E60", VA = "0x182E7B860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x2E7BA00", Offset = "0x2E7A000", VA = "0x182E7BA00")]
	public static bool operator ==(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x2E7BA40", Offset = "0x2E7A040", VA = "0x182E7BA40")]
	public static bool operator !=(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x2E7B6F0", Offset = "0x2E79CF0", VA = "0x182E7B6F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

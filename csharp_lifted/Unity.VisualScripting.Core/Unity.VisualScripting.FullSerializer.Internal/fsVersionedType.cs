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
	[Address(RVA = "0x686FAE0", Offset = "0x686EAE0", VA = "0x686FAE0")]
	public object Migrate(object ancestorInstance)
	{
		return null;
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x6874560", Offset = "0x6873560", VA = "0x6874560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x6874710", Offset = "0x6873710", VA = "0x6874710")]
	public static bool operator ==(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x6874750", Offset = "0x6873750", VA = "0x6874750")]
	public static bool operator !=(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x6874790", Offset = "0x6873790", VA = "0x6874790", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x6874820", Offset = "0x6873820", VA = "0x6874820", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

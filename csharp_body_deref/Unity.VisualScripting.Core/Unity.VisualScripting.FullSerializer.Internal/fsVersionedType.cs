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

[Token(Token = "0x2000223")]
public struct fsVersionedType
{
	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x0")]
	public fsVersionedType[] Ancestors;

	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x8")]
	public string VersionString;

	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x10")]
	public Type ModelType;

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x4D8D290", Offset = "0x4D8D290", VA = "0x4D8D290")]
	public object Migrate(object ancestorInstance)
	{
		return null;
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x4D8D340", Offset = "0x4D8D340", VA = "0x4D8D340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x4D8D4F0", Offset = "0x4D8D4F0", VA = "0x4D8D4F0")]
	public static bool operator ==(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x4D8D530", Offset = "0x4D8D530", VA = "0x4D8D530")]
	public static bool operator !=(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x4D8D570", Offset = "0x4D8D570", VA = "0x4D8D570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x4D8D600", Offset = "0x4D8D600", VA = "0x4D8D600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

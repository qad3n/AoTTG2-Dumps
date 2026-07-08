using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x2000224")]
public struct fsVersionedType
{
	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x0")]
	public fsVersionedType[] Ancestors;

	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x8")]
	public string VersionString;

	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x10")]
	public Type ModelType;

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x4A61D40", Offset = "0x4A61D40", VA = "0x4A61D40")]
	public object Migrate(object ancestorInstance)
	{
		return null;
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x4A66B40", Offset = "0x4A66B40", VA = "0x4A66B40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x4A66CF0", Offset = "0x4A66CF0", VA = "0x4A66CF0")]
	public static bool operator ==(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x4A66D30", Offset = "0x4A66D30", VA = "0x4A66D30")]
	public static bool operator !=(fsVersionedType a, fsVersionedType b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x4A66D70", Offset = "0x4A66D70", VA = "0x4A66D70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x4A66E00", Offset = "0x4A66E00", VA = "0x4A66E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

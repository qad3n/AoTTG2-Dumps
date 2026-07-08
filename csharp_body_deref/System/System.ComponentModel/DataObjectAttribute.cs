using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200027C")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DataObjectAttribute : Attribute
{
	[Token(Token = "0x4000D32")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DataObjectAttribute DataObject;

	[Token(Token = "0x4000D33")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DataObjectAttribute NonDataObject;

	[Token(Token = "0x4000D34")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DataObjectAttribute Default;

	[Token(Token = "0x17000378")]
	public bool IsDataObject
	{
		[Token(Token = "0x6000F9E")]
		[Address(RVA = "0x4569460", Offset = "0x4569460", VA = "0x4569460")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x4569420", Offset = "0x4569420", VA = "0x4569420")]
	public DataObjectAttribute()
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x4569440", Offset = "0x4569440", VA = "0x4569440")]
	public DataObjectAttribute(bool isDataObject)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x4569470", Offset = "0x4569470", VA = "0x4569470", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x4569500", Offset = "0x4569500", VA = "0x4569500", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x4569530", Offset = "0x4569530", VA = "0x4569530", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}

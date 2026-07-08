using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200027D")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class DataObjectFieldAttribute : Attribute
{
	[Token(Token = "0x17000379")]
	public bool IsIdentity
	{
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x4569740", Offset = "0x4569740", VA = "0x4569740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037A")]
	public bool IsNullable
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x4569750", Offset = "0x4569750", VA = "0x4569750")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037B")]
	public int Length
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x4569760", Offset = "0x4569760", VA = "0x4569760")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700037C")]
	public bool PrimaryKey
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x4569770", Offset = "0x4569770", VA = "0x4569770")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x4569660", Offset = "0x4569660", VA = "0x4569660")]
	public DataObjectFieldAttribute(bool primaryKey)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x45696D0", Offset = "0x45696D0", VA = "0x45696D0")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4569700", Offset = "0x4569700", VA = "0x4569700")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4569690", Offset = "0x4569690", VA = "0x4569690")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable, int length)
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x4569780", Offset = "0x4569780", VA = "0x4569780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x4569840", Offset = "0x4569840", VA = "0x4569840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

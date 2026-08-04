// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectFieldAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x488E840", Offset = "0x488E840", VA = "0x488E840")]
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
		[Address(RVA = "0x488E850", Offset = "0x488E850", VA = "0x488E850")]
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
		[Address(RVA = "0x488E860", Offset = "0x488E860", VA = "0x488E860")]
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
		[Address(RVA = "0x488E870", Offset = "0x488E870", VA = "0x488E870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x488E760", Offset = "0x488E760", VA = "0x488E760")]
	public DataObjectFieldAttribute(bool primaryKey)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x488E7D0", Offset = "0x488E7D0", VA = "0x488E7D0")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x488E800", Offset = "0x488E800", VA = "0x488E800")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x488E790", Offset = "0x488E790", VA = "0x488E790")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable, int length)
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x488E880", Offset = "0x488E880", VA = "0x488E880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x488E940", Offset = "0x488E940", VA = "0x488E940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

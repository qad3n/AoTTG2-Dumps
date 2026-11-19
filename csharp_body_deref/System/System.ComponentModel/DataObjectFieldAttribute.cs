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

[Token(Token = "0x2000149")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class DataObjectFieldAttribute : Attribute
{
	[Token(Token = "0x170001B9")]
	public bool IsIdentity
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x622E970", Offset = "0x622D970", VA = "0x622E970")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BA")]
	public bool IsNullable
	{
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x622E980", Offset = "0x622D980", VA = "0x622E980")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BB")]
	public int Length
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x622E990", Offset = "0x622D990", VA = "0x622E990")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001BC")]
	public bool PrimaryKey
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x622E9A0", Offset = "0x622D9A0", VA = "0x622E9A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x622E890", Offset = "0x622D890", VA = "0x622E890")]
	public DataObjectFieldAttribute(bool primaryKey)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x622E900", Offset = "0x622D900", VA = "0x622E900")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x622E930", Offset = "0x622D930", VA = "0x622E930")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable)
	{
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x622E8C0", Offset = "0x622D8C0", VA = "0x622E8C0")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable, int length)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x622E9B0", Offset = "0x622D9B0", VA = "0x622E9B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x622EA50", Offset = "0x622DA50", VA = "0x622EA50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

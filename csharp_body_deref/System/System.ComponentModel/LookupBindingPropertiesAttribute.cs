using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002BB")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class LookupBindingPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000DA1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LookupBindingPropertiesAttribute Default;

	[Token(Token = "0x170003D8")]
	public string DataSource
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x4572FC0", Offset = "0x4572FC0", VA = "0x4572FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D9")]
	public string DisplayMember
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x4572FD0", Offset = "0x4572FD0", VA = "0x4572FD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DA")]
	public string ValueMember
	{
		[Token(Token = "0x600112B")]
		[Address(RVA = "0x4572FE0", Offset = "0x4572FE0", VA = "0x4572FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DB")]
	public string LookupMember
	{
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x4572FF0", Offset = "0x4572FF0", VA = "0x4572FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4572EF0", Offset = "0x4572EF0", VA = "0x4572EF0")]
	public LookupBindingPropertiesAttribute()
	{
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4572F50", Offset = "0x4572F50", VA = "0x4572F50")]
	public LookupBindingPropertiesAttribute(string dataSource, string displayMember, string valueMember, string lookupMember)
	{
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x4573000", Offset = "0x4573000", VA = "0x4573000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x45730B0", Offset = "0x45730B0", VA = "0x45730B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

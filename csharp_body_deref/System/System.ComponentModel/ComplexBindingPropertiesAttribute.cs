using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000275")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class ComplexBindingPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ComplexBindingPropertiesAttribute Default;

	[Token(Token = "0x17000374")]
	public string DataSource
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x45623D0", Offset = "0x45623D0", VA = "0x45623D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000375")]
	public string DataMember
	{
		[Token(Token = "0x6000F73")]
		[Address(RVA = "0x45623E0", Offset = "0x45623E0", VA = "0x45623E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x4562350", Offset = "0x4562350", VA = "0x4562350")]
	public ComplexBindingPropertiesAttribute()
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4562360", Offset = "0x4562360", VA = "0x4562360")]
	public ComplexBindingPropertiesAttribute(string dataSource)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4562390", Offset = "0x4562390", VA = "0x4562390")]
	public ComplexBindingPropertiesAttribute(string dataSource, string dataMember)
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x45623F0", Offset = "0x45623F0", VA = "0x45623F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4562470", Offset = "0x4562470", VA = "0x4562470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000288")]
[AttributeUsage(AttributeTargets.All)]
public class PropertyTabAttribute : Attribute
{
	[Token(Token = "0x4000D52")]
	[FieldOffset(Offset = "0x10")]
	private Type[] _tabClasses;

	[Token(Token = "0x4000D53")]
	[FieldOffset(Offset = "0x18")]
	private string[] _tabClassNames;

	[Token(Token = "0x17000386")]
	public Type[] TabClasses
	{
		[Token(Token = "0x6000FE9")]
		[Address(RVA = "0x456B900", Offset = "0x456B900", VA = "0x456B900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000387")]
	protected string[] TabClassNames
	{
		[Token(Token = "0x6000FEA")]
		[Address(RVA = "0x456BC70", Offset = "0x456BC70", VA = "0x456BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000388")]
	public PropertyTabScope[] TabScopes
	{
		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x456BCE0", Offset = "0x456BCE0", VA = "0x456BCE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FEC")]
		[Address(RVA = "0x456BCF0", Offset = "0x456BCF0", VA = "0x456BCF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x456B440", Offset = "0x456B440", VA = "0x456B440")]
	public PropertyTabAttribute()
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x456B5F0", Offset = "0x456B5F0", VA = "0x456B5F0")]
	public PropertyTabAttribute(Type tabClass)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x456B790", Offset = "0x456B790", VA = "0x456B790")]
	public PropertyTabAttribute(string tabClassName)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x456B600", Offset = "0x456B600", VA = "0x456B600")]
	public PropertyTabAttribute(Type tabClass, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x456B7A0", Offset = "0x456B7A0", VA = "0x456B7A0")]
	public PropertyTabAttribute(string tabClassName, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x456BD00", Offset = "0x456BD00", VA = "0x456BD00", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x456BD70", Offset = "0x456BD70", VA = "0x456BD70")]
	public bool Equals(PropertyTabAttribute other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x456BEE0", Offset = "0x456BEE0", VA = "0x456BEE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x456BEF0", Offset = "0x456BEF0", VA = "0x456BEF0")]
	protected void InitializeArrays(string[] tabClassNames, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x456C210", Offset = "0x456C210", VA = "0x456C210")]
	protected void InitializeArrays(Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x456BF00", Offset = "0x456BF00", VA = "0x456BF00")]
	private void InitializeArrays(string[] tabClassNames, Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}
}

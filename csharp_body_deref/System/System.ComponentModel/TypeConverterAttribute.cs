using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002DA")]
[AttributeUsage(AttributeTargets.All)]
public sealed class TypeConverterAttribute : Attribute
{
	[Token(Token = "0x4000E1D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypeConverterAttribute Default;

	[Token(Token = "0x1700042C")]
	public string ConverterTypeName
	{
		[Token(Token = "0x600128D")]
		[Address(RVA = "0x4586110", Offset = "0x4586110", VA = "0x4586110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x4586050", Offset = "0x4586050", VA = "0x4586050")]
	public TypeConverterAttribute()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x4586090", Offset = "0x4586090", VA = "0x4586090")]
	public TypeConverterAttribute(Type type)
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x45860E0", Offset = "0x45860E0", VA = "0x45860E0")]
	public TypeConverterAttribute(string typeName)
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x4586120", Offset = "0x4586120", VA = "0x4586120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x4586190", Offset = "0x4586190", VA = "0x4586190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

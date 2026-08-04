// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeConverterAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48AB210", Offset = "0x48AB210", VA = "0x48AB210")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x48AB150", Offset = "0x48AB150", VA = "0x48AB150")]
	public TypeConverterAttribute()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x48AB190", Offset = "0x48AB190", VA = "0x48AB190")]
	public TypeConverterAttribute(Type type)
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x48AB1E0", Offset = "0x48AB1E0", VA = "0x48AB1E0")]
	public TypeConverterAttribute(string typeName)
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x48AB220", Offset = "0x48AB220", VA = "0x48AB220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x48AB290", Offset = "0x48AB290", VA = "0x48AB290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

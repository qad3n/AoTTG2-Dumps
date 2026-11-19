// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000148")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DataObjectAttribute : Attribute
{
	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DataObjectAttribute DataObject;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DataObjectAttribute NonDataObject;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DataObjectAttribute Default;

	[Token(Token = "0x170001B8")]
	public bool IsDataObject
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0x622E6B0", Offset = "0x622D6B0", VA = "0x622E6B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x622E670", Offset = "0x622D670", VA = "0x622E670")]
	public DataObjectAttribute()
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x622E690", Offset = "0x622D690", VA = "0x622E690")]
	public DataObjectAttribute(bool isDataObject)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x622E6C0", Offset = "0x622D6C0", VA = "0x622E6C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x622E730", Offset = "0x622D730", VA = "0x622E730", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x622E760", Offset = "0x622D760", VA = "0x622E760", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}

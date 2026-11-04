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

[Token(Token = "0x2000187")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DataObjectAttribute : Attribute
{
	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DataObjectAttribute DataObject;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DataObjectAttribute NonDataObject;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DataObjectAttribute Default;

	[Token(Token = "0x170001E7")]
	public bool IsDataObject
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x289A170", Offset = "0x2898770", VA = "0x18289A170")]
	public DataObjectAttribute()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public DataObjectAttribute(bool isDataObject)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x2899F90", Offset = "0x2898590", VA = "0x182899F90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x287C060", Offset = "0x287A660", VA = "0x18287C060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x289A010", Offset = "0x2898610", VA = "0x18289A010", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}

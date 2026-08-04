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

[Token(Token = "0x200027C")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DataObjectAttribute : Attribute
{
	[Token(Token = "0x4000D32")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DataObjectAttribute DataObject;

	[Token(Token = "0x4000D33")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DataObjectAttribute NonDataObject;

	[Token(Token = "0x4000D34")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DataObjectAttribute Default;

	[Token(Token = "0x17000378")]
	public bool IsDataObject
	{
		[Token(Token = "0x6000F9E")]
		[Address(RVA = "0x488E560", Offset = "0x488E560", VA = "0x488E560")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x488E520", Offset = "0x488E520", VA = "0x488E520")]
	public DataObjectAttribute()
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x488E540", Offset = "0x488E540", VA = "0x488E540")]
	public DataObjectAttribute(bool isDataObject)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x488E570", Offset = "0x488E570", VA = "0x488E570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x488E600", Offset = "0x488E600", VA = "0x488E600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x488E630", Offset = "0x488E630", VA = "0x488E630", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}

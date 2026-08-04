// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EditorAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028D")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
public sealed class EditorAttribute : Attribute
{
	[Token(Token = "0x4000D62")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x1700038E")]
	public string EditorBaseTypeName
	{
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x4891F10", Offset = "0x4891F10", VA = "0x4891F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038F")]
	public string EditorTypeName
	{
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x4891F20", Offset = "0x4891F20", VA = "0x4891F20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000390")]
	public override object TypeId
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x4891F30", Offset = "0x4891F30", VA = "0x4891F30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x4891CE0", Offset = "0x4891CE0", VA = "0x4891CE0")]
	public EditorAttribute()
	{
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x4891D40", Offset = "0x4891D40", VA = "0x4891D40")]
	public EditorAttribute(string typeName, string baseTypeName)
	{
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x4891DE0", Offset = "0x4891DE0", VA = "0x4891DE0")]
	public EditorAttribute(string typeName, Type baseType)
	{
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x4891E90", Offset = "0x4891E90", VA = "0x4891E90")]
	public EditorAttribute(Type type, Type baseType)
	{
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x4891FD0", Offset = "0x4891FD0", VA = "0x4891FD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x4892060", Offset = "0x4892060", VA = "0x4892060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

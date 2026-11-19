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

[Token(Token = "0x2000159")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
public sealed class EditorAttribute : Attribute
{
	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x170001CE")]
	public string EditorBaseTypeName
	{
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x6232020", Offset = "0x6231020", VA = "0x6232020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public string EditorTypeName
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x6232030", Offset = "0x6231030", VA = "0x6232030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	public override object TypeId
	{
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x6232040", Offset = "0x6231040", VA = "0x6232040", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x6231DF0", Offset = "0x6230DF0", VA = "0x6231DF0")]
	public EditorAttribute()
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x6231E50", Offset = "0x6230E50", VA = "0x6231E50")]
	public EditorAttribute(string typeName, string baseTypeName)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x6231EF0", Offset = "0x6230EF0", VA = "0x6231EF0")]
	public EditorAttribute(string typeName, Type baseType)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x6231FA0", Offset = "0x6230FA0", VA = "0x6231FA0")]
	public EditorAttribute(Type type, Type baseType)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x62320E0", Offset = "0x62310E0", VA = "0x62320E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x6232160", Offset = "0x6231160", VA = "0x6232160", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

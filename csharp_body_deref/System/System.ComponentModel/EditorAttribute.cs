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
		[Address(RVA = "0x456CE10", Offset = "0x456CE10", VA = "0x456CE10")]
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
		[Address(RVA = "0x456CE20", Offset = "0x456CE20", VA = "0x456CE20")]
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
		[Address(RVA = "0x456CE30", Offset = "0x456CE30", VA = "0x456CE30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x456CBE0", Offset = "0x456CBE0", VA = "0x456CBE0")]
	public EditorAttribute()
	{
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x456CC40", Offset = "0x456CC40", VA = "0x456CC40")]
	public EditorAttribute(string typeName, string baseTypeName)
	{
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x456CCE0", Offset = "0x456CCE0", VA = "0x456CCE0")]
	public EditorAttribute(string typeName, Type baseType)
	{
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x456CD90", Offset = "0x456CD90", VA = "0x456CD90")]
	public EditorAttribute(Type type, Type baseType)
	{
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x456CED0", Offset = "0x456CED0", VA = "0x456CED0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x456CF60", Offset = "0x456CF60", VA = "0x456CF60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

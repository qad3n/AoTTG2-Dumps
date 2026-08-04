// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProvidePropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CA")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class ProvidePropertyAttribute : Attribute
{
	[Token(Token = "0x1700041B")]
	public string PropertyName
	{
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x48A5C10", Offset = "0x48A5C10", VA = "0x48A5C10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041C")]
	public string ReceiverTypeName
	{
		[Token(Token = "0x6001237")]
		[Address(RVA = "0x48A5C20", Offset = "0x48A5C20", VA = "0x48A5C20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041D")]
	public override object TypeId
	{
		[Token(Token = "0x600123A")]
		[Address(RVA = "0x48A5D10", Offset = "0x48A5D10", VA = "0x48A5D10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x48A5B70", Offset = "0x48A5B70", VA = "0x48A5B70")]
	public ProvidePropertyAttribute(string propertyName, Type receiverType)
	{
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x48A5BD0", Offset = "0x48A5BD0", VA = "0x48A5BD0")]
	public ProvidePropertyAttribute(string propertyName, string receiverTypeName)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x48A5C30", Offset = "0x48A5C30", VA = "0x48A5C30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x48A5CC0", Offset = "0x48A5CC0", VA = "0x48A5CC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

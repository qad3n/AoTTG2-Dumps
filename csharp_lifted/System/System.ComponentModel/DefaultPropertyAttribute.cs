// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000150")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultPropertyAttribute : Attribute
{
	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultPropertyAttribute Default;

	[Token(Token = "0x170001C3")]
	public string Name
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x622FCB0", Offset = "0x622ECB0", VA = "0x622FCB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x622FC80", Offset = "0x622EC80", VA = "0x622FC80")]
	public DefaultPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x622FCC0", Offset = "0x622ECC0", VA = "0x622FCC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x622FD20", Offset = "0x622ED20", VA = "0x622FD20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

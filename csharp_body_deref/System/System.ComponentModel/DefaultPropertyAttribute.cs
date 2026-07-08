using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000284")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultPropertyAttribute : Attribute
{
	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultPropertyAttribute Default;

	[Token(Token = "0x17000383")]
	public string Name
	{
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x456AAC0", Offset = "0x456AAC0", VA = "0x456AAC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x456AA90", Offset = "0x456AA90", VA = "0x456AA90")]
	public DefaultPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x456AAD0", Offset = "0x456AAD0", VA = "0x456AAD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x456AB40", Offset = "0x456AB40", VA = "0x456AB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

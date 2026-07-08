using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000283")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultEventAttribute : Attribute
{
	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultEventAttribute Default;

	[Token(Token = "0x17000382")]
	public string Name
	{
		[Token(Token = "0x6000FC8")]
		[Address(RVA = "0x456A980", Offset = "0x456A980", VA = "0x456A980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x456A950", Offset = "0x456A950", VA = "0x456A950")]
	public DefaultEventAttribute(string name)
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x456A990", Offset = "0x456A990", VA = "0x456A990", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x456AA00", Offset = "0x456AA00", VA = "0x456AA00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}

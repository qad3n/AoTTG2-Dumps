using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000473")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class FixedBufferAttribute : Attribute
{
	[Token(Token = "0x1700046D")]
	public Type ElementType
	{
		[Token(Token = "0x6002270")]
		[Address(RVA = "0x4EDB320", Offset = "0x4EDB320", VA = "0x4EDB320")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public int Length
	{
		[Token(Token = "0x6002271")]
		[Address(RVA = "0x4EDB330", Offset = "0x4EDB330", VA = "0x4EDB330")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600226F")]
	[Address(RVA = "0x4EDB2F0", Offset = "0x4EDB2F0", VA = "0x4EDB2F0")]
	public FixedBufferAttribute(Type elementType, int length)
	{
	}
}

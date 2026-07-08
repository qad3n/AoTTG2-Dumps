using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000171")]
internal class UpaException : Exception
{
	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x90")]
	private object particle1;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x98")]
	private object particle2;

	[Token(Token = "0x17000416")]
	public object Particle1
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x4507AA0", Offset = "0x4507AA0", VA = "0x4507AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public object Particle2
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x4507AB0", Offset = "0x4507AB0", VA = "0x4507AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x4507A20", Offset = "0x4507A20", VA = "0x4507A20")]
	public UpaException(object particle1, object particle2)
	{
	}
}

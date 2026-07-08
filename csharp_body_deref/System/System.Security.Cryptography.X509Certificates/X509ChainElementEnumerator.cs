using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000104")]
public sealed class X509ChainElementEnumerator : IEnumerator
{
	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000140")]
	public X509ChainElement Current
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x4617910", Offset = "0x4617910", VA = "0x4617910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x46179F0", Offset = "0x46179F0", VA = "0x46179F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x46175B0", Offset = "0x46175B0", VA = "0x46175B0")]
	internal X509ChainElementEnumerator(IEnumerable enumerable)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4617A90", Offset = "0x4617A90", VA = "0x4617A90", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4617B20", Offset = "0x4617B20", VA = "0x4617B20", Slot = "6")]
	public void Reset()
	{
	}
}

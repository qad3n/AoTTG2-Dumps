using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010C")]
public sealed class X509ExtensionEnumerator : IEnumerator
{
	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x1700015B")]
	public X509Extension Current
	{
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x461DA60", Offset = "0x461DA60", VA = "0x461DA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x461DB40", Offset = "0x461DB40", VA = "0x461DB40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x461D920", Offset = "0x461D920", VA = "0x461D920")]
	internal X509ExtensionEnumerator(ArrayList list)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x461DBE0", Offset = "0x461DBE0", VA = "0x461DBE0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x461DC70", Offset = "0x461DC70", VA = "0x461DC70", Slot = "6")]
	public void Reset()
	{
	}
}

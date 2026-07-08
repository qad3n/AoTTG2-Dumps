using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FA")]
public sealed class X509Certificate2Enumerator : IEnumerator
{
	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000113")]
	public X509Certificate2 Current
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x4612300", Offset = "0x4612300", VA = "0x4612300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x4612470", Offset = "0x4612470", VA = "0x4612470", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x46121A0", Offset = "0x46121A0", VA = "0x46121A0")]
	internal X509Certificate2Enumerator(X509Certificate2Collection collection)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x46123E0", Offset = "0x46123E0", VA = "0x46123E0")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4612510", Offset = "0x4612510", VA = "0x4612510", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x46125A0", Offset = "0x46125A0", VA = "0x46125A0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}

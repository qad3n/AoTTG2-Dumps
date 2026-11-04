// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200013A")]
public sealed class X509Certificate2Enumerator : IEnumerator
{
	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x1700014C")]
	public X509Certificate2 Current
	{
		[Token(Token = "0x6000778")]
		[Address(RVA = "0x2883220", Offset = "0x2881820", VA = "0x182883220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600077A")]
		[Address(RVA = "0x2883160", Offset = "0x2881760", VA = "0x182883160", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x28831B0", Offset = "0x28817B0", VA = "0x1828831B0")]
	internal X509Certificate2Enumerator(X509Certificate2Collection collection)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x2883070", Offset = "0x2881670", VA = "0x182883070")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x28830C0", Offset = "0x28816C0", VA = "0x1828830C0", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x2883110", Offset = "0x2881710", VA = "0x182883110", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}

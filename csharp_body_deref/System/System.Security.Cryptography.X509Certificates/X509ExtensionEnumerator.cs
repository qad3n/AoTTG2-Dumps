// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4942B60", Offset = "0x4942B60", VA = "0x4942B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x4942C40", Offset = "0x4942C40", VA = "0x4942C40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4942A20", Offset = "0x4942A20", VA = "0x4942A20")]
	internal X509ExtensionEnumerator(ArrayList list)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4942CE0", Offset = "0x4942CE0", VA = "0x4942CE0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4942D70", Offset = "0x4942D70", VA = "0x4942D70", Slot = "6")]
	public void Reset()
	{
	}
}

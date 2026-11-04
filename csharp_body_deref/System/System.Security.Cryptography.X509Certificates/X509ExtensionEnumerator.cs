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

[Token(Token = "0x200014C")]
public sealed class X509ExtensionEnumerator : IEnumerator
{
	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000194")]
	public X509Extension Current
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x288F790", Offset = "0x288DD90", VA = "0x18288F790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x288F6F0", Offset = "0x288DCF0", VA = "0x18288F6F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x288F740", Offset = "0x288DD40", VA = "0x18288F740")]
	internal X509ExtensionEnumerator(ArrayList list)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x288F650", Offset = "0x288DC50", VA = "0x18288F650", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x288F6A0", Offset = "0x288DCA0", VA = "0x18288F6A0", Slot = "6")]
	public void Reset()
	{
	}
}

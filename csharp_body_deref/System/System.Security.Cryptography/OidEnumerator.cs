// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.OidEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E6")]
public sealed class OidEnumerator : IEnumerator
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x10")]
	private readonly OidCollection _oids;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x18")]
	private int _current;

	[Token(Token = "0x17000102")]
	public Oid Current
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x620A830", Offset = "0x6209830", VA = "0x620A830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000103")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x620A880", Offset = "0x6209880", VA = "0x620A880", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x620A560", Offset = "0x6209560", VA = "0x620A560")]
	internal OidEnumerator(OidCollection oids)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x620A8D0", Offset = "0x62098D0", VA = "0x620A8D0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x620A930", Offset = "0x6209930", VA = "0x620A930", Slot = "6")]
	public void Reset()
	{
	}
}

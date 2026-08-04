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

[Token(Token = "0x20000E5")]
public sealed class OidEnumerator : IEnumerator
{
	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x10")]
	private readonly OidCollection _oids;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x18")]
	private int _current;

	[Token(Token = "0x170000F8")]
	public Oid Current
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x492ED30", Offset = "0x492ED30", VA = "0x492ED30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x492ED80", Offset = "0x492ED80", VA = "0x492ED80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x492EA50", Offset = "0x492EA50", VA = "0x492EA50")]
	internal OidEnumerator(OidCollection oids)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x492EDD0", Offset = "0x492EDD0", VA = "0x492EDD0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x492EE30", Offset = "0x492EE30", VA = "0x492EE30", Slot = "6")]
	public void Reset()
	{
	}
}

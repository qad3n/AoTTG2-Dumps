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

[Token(Token = "0x2000125")]
public sealed class OidEnumerator : IEnumerator
{
	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x10")]
	private readonly OidCollection _oids;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x18")]
	private int _current;

	[Token(Token = "0x17000131")]
	public Oid Current
	{
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x287EB80", Offset = "0x287D180", VA = "0x18287EB80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x287EB80", Offset = "0x287D180", VA = "0x18287EB80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
	internal OidEnumerator(OidCollection oids)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x287EB00", Offset = "0x287D100", VA = "0x18287EB00", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
	public void Reset()
	{
	}
}

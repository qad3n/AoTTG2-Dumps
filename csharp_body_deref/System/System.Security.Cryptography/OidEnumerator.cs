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
		[Address(RVA = "0x4609C30", Offset = "0x4609C30", VA = "0x4609C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x4609C80", Offset = "0x4609C80", VA = "0x4609C80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4609950", Offset = "0x4609950", VA = "0x4609950")]
	internal OidEnumerator(OidCollection oids)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4609CD0", Offset = "0x4609CD0", VA = "0x4609CD0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4609D30", Offset = "0x4609D30", VA = "0x4609D30", Slot = "6")]
	public void Reset()
	{
	}
}

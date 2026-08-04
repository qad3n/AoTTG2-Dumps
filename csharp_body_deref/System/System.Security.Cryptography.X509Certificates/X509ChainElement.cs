// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000102")]
public class X509ChainElement
{
	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x10")]
	private X509Certificate2 certificate;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x20")]
	private string info;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatusFlags compressed_status_flags;

	[Token(Token = "0x17000139")]
	public X509Certificate2 Certificate
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x493B150", Offset = "0x493B150", VA = "0x493B150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public X509ChainStatus[] ChainElementStatus
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x493B160", Offset = "0x493B160", VA = "0x493B160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal X509ChainStatusFlags StatusFlags
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x493B170", Offset = "0x493B170", VA = "0x493B170")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x493B180", Offset = "0x493B180", VA = "0x493B180")]
		set
		{
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x493B100", Offset = "0x493B100", VA = "0x493B100")]
	internal X509ChainElement(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x493B190", Offset = "0x493B190", VA = "0x493B190")]
	private int Count(X509ChainStatusFlags flags)
	{
		return default(int);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x493B320", Offset = "0x493B320", VA = "0x493B320")]
	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x493B500", Offset = "0x493B500", VA = "0x493B500")]
	internal void UncompressFlags()
	{
	}
}

using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C9")]
[ComVisible(true)]
public abstract class AsymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000CD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int KeySizeValue;

	[Token(Token = "0x4000CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x1700028E")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001879")]
		[Address(RVA = "0x4E465A0", Offset = "0x4E465A0", VA = "0x4E465A0", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600187A")]
		[Address(RVA = "0x4E465B0", Offset = "0x4E465B0", VA = "0x4E465B0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x600187B")]
		[Address(RVA = "0x4E466A0", Offset = "0x4E466A0", VA = "0x4E466A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000290")]
	public virtual string SignatureAlgorithm
	{
		[Token(Token = "0x600187C")]
		[Address(RVA = "0x4E46720", Offset = "0x4E46720", VA = "0x4E46720", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	public virtual string KeyExchangeAlgorithm
	{
		[Token(Token = "0x600187D")]
		[Address(RVA = "0x4E46760", Offset = "0x4E46760", VA = "0x4E46760", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x4E464A0", Offset = "0x4E464A0", VA = "0x4E464A0")]
	protected AsymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x4E464B0", Offset = "0x4E464B0", VA = "0x4E464B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x4E46520", Offset = "0x4E46520", VA = "0x4E46520")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x4E46590", Offset = "0x4E46590", VA = "0x4E46590", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x4E467A0", Offset = "0x4E467A0", VA = "0x4E467A0")]
	public static AsymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x4E467E0", Offset = "0x4E467E0", VA = "0x4E467E0")]
	public static AsymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x4E46870", Offset = "0x4E46870", VA = "0x4E46870", Slot = "11")]
	public virtual void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x4E468B0", Offset = "0x4E468B0", VA = "0x4E468B0", Slot = "12")]
	public virtual string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x4E468F0", Offset = "0x4E468F0", VA = "0x4E468F0", Slot = "13")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x4E46930", Offset = "0x4E46930", VA = "0x4E46930", Slot = "14")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x4E46970", Offset = "0x4E46970", VA = "0x4E46970", Slot = "15")]
	public virtual byte[] ExportPkcs8PrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x4E469B0", Offset = "0x4E469B0", VA = "0x4E469B0", Slot = "16")]
	public virtual byte[] ExportSubjectPublicKeyInfo()
	{
		return null;
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x4E469F0", Offset = "0x4E469F0", VA = "0x4E469F0", Slot = "17")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001887")]
	[Address(RVA = "0x4E46A30", Offset = "0x4E46A30", VA = "0x4E46A30", Slot = "18")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x4E46A70", Offset = "0x4E46A70", VA = "0x4E46A70", Slot = "19")]
	public virtual void ImportPkcs8PrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x4E46AB0", Offset = "0x4E46AB0", VA = "0x4E46AB0", Slot = "20")]
	public virtual void ImportSubjectPublicKeyInfo(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x4E46AF0", Offset = "0x4E46AF0", VA = "0x4E46AF0", Slot = "21")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x4E46B30", Offset = "0x4E46B30", VA = "0x4E46B30", Slot = "22")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x4E46B70", Offset = "0x4E46B70", VA = "0x4E46B70", Slot = "23")]
	public virtual bool TryExportPkcs8PrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x4E46BB0", Offset = "0x4E46BB0", VA = "0x4E46BB0", Slot = "24")]
	public virtual bool TryExportSubjectPublicKeyInfo(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}

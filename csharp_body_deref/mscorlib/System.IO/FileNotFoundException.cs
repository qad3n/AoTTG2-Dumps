// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000667")]
public class FileNotFoundException : IOException
{
	[Token(Token = "0x170007E3")]
	public override string Message
	{
		[Token(Token = "0x60030CB")]
		[Address(RVA = "0x1ACE3D0", Offset = "0x1ACC9D0", VA = "0x181ACE3D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E4")]
	public string FileName
	{
		[Token(Token = "0x60030CD")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E5")]
	public string FusionLog
	{
		[Token(Token = "0x60030CE")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60030C8")]
	[Address(RVA = "0x1ACE250", Offset = "0x1ACC850", VA = "0x181ACE250")]
	public FileNotFoundException()
	{
	}

	[Token(Token = "0x60030C9")]
	[Address(RVA = "0x1ACE370", Offset = "0x1ACC970", VA = "0x181ACE370")]
	public FileNotFoundException(string message)
	{
	}

	[Token(Token = "0x60030CA")]
	[Address(RVA = "0x1ACE390", Offset = "0x1ACC990", VA = "0x181ACE390")]
	public FileNotFoundException(string message, string fileName)
	{
	}

	[Token(Token = "0x60030CC")]
	[Address(RVA = "0x1ACDF90", Offset = "0x1ACC590", VA = "0x181ACDF90")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x60030CF")]
	[Address(RVA = "0x1ACE060", Offset = "0x1ACC660", VA = "0x181ACE060", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60030D0")]
	[Address(RVA = "0x1ACE2A0", Offset = "0x1ACC8A0", VA = "0x181ACE2A0")]
	protected FileNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60030D1")]
	[Address(RVA = "0x1ACDEA0", Offset = "0x1ACC4A0", VA = "0x181ACDEA0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}

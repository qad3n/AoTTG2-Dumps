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
[Token(Token = "0x200053E")]
public class FileNotFoundException : IOException
{
	[Token(Token = "0x170005CC")]
	public override string Message
	{
		[Token(Token = "0x60027FC")]
		[Address(RVA = "0x3BEA5D0", Offset = "0x3BEA5D0", VA = "0x3BEA5D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CD")]
	public string FileName
	{
		[Token(Token = "0x60027FE")]
		[Address(RVA = "0x3BEA6A0", Offset = "0x3BEA6A0", VA = "0x3BEA6A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CE")]
	public string FusionLog
	{
		[Token(Token = "0x60027FF")]
		[Address(RVA = "0x3BEA6B0", Offset = "0x3BEA6B0", VA = "0x3BEA6B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60027F9")]
	[Address(RVA = "0x3BEA530", Offset = "0x3BEA530", VA = "0x3BEA530")]
	public FileNotFoundException()
	{
	}

	[Token(Token = "0x60027FA")]
	[Address(RVA = "0x3BEA570", Offset = "0x3BEA570", VA = "0x3BEA570")]
	public FileNotFoundException(string message)
	{
	}

	[Token(Token = "0x60027FB")]
	[Address(RVA = "0x3BEA590", Offset = "0x3BEA590", VA = "0x3BEA590")]
	public FileNotFoundException(string message, string fileName)
	{
	}

	[Token(Token = "0x60027FD")]
	[Address(RVA = "0x3BEA5E0", Offset = "0x3BEA5E0", VA = "0x3BEA5E0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6002800")]
	[Address(RVA = "0x3BEA6C0", Offset = "0x3BEA6C0", VA = "0x3BEA6C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002801")]
	[Address(RVA = "0x3BEA890", Offset = "0x3BEA890", VA = "0x3BEA890")]
	protected FileNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002802")]
	[Address(RVA = "0x3BEA950", Offset = "0x3BEA950", VA = "0x3BEA950", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}

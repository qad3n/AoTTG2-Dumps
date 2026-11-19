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
[Token(Token = "0x2000640")]
public class FileNotFoundException : IOException
{
	[Token(Token = "0x170007E0")]
	public override string Message
	{
		[Token(Token = "0x6003090")]
		[Address(RVA = "0x5464EF0", Offset = "0x5463EF0", VA = "0x5464EF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E1")]
	public string FileName
	{
		[Token(Token = "0x6003092")]
		[Address(RVA = "0x5465070", Offset = "0x5464070", VA = "0x5465070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E2")]
	public string FusionLog
	{
		[Token(Token = "0x6003093")]
		[Address(RVA = "0x5465080", Offset = "0x5464080", VA = "0x5465080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600308D")]
	[Address(RVA = "0x5464E50", Offset = "0x5463E50", VA = "0x5464E50")]
	public FileNotFoundException()
	{
	}

	[Token(Token = "0x600308E")]
	[Address(RVA = "0x5464E90", Offset = "0x5463E90", VA = "0x5464E90")]
	public FileNotFoundException(string message)
	{
	}

	[Token(Token = "0x600308F")]
	[Address(RVA = "0x5464EB0", Offset = "0x5463EB0", VA = "0x5464EB0")]
	public FileNotFoundException(string message, string fileName)
	{
	}

	[Token(Token = "0x6003091")]
	[Address(RVA = "0x5464FC0", Offset = "0x5463FC0", VA = "0x5464FC0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6003094")]
	[Address(RVA = "0x5465090", Offset = "0x5464090", VA = "0x5465090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6003095")]
	[Address(RVA = "0x5465260", Offset = "0x5464260", VA = "0x5465260")]
	protected FileNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6003096")]
	[Address(RVA = "0x5465320", Offset = "0x5464320", VA = "0x5465320", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}

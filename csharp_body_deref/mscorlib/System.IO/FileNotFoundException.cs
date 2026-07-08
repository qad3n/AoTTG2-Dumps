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
		[Address(RVA = "0x4F04AB0", Offset = "0x4F04AB0", VA = "0x4F04AB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CD")]
	public string FileName
	{
		[Token(Token = "0x60027FE")]
		[Address(RVA = "0x4F04B80", Offset = "0x4F04B80", VA = "0x4F04B80")]
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
		[Address(RVA = "0x4F04B90", Offset = "0x4F04B90", VA = "0x4F04B90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60027F9")]
	[Address(RVA = "0x4F04A10", Offset = "0x4F04A10", VA = "0x4F04A10")]
	public FileNotFoundException()
	{
	}

	[Token(Token = "0x60027FA")]
	[Address(RVA = "0x4F04A50", Offset = "0x4F04A50", VA = "0x4F04A50")]
	public FileNotFoundException(string message)
	{
	}

	[Token(Token = "0x60027FB")]
	[Address(RVA = "0x4F04A70", Offset = "0x4F04A70", VA = "0x4F04A70")]
	public FileNotFoundException(string message, string fileName)
	{
	}

	[Token(Token = "0x60027FD")]
	[Address(RVA = "0x4F04AC0", Offset = "0x4F04AC0", VA = "0x4F04AC0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6002800")]
	[Address(RVA = "0x4F04BA0", Offset = "0x4F04BA0", VA = "0x4F04BA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002801")]
	[Address(RVA = "0x4F04D70", Offset = "0x4F04D70", VA = "0x4F04D70")]
	protected FileNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002802")]
	[Address(RVA = "0x4F04E30", Offset = "0x4F04E30", VA = "0x4F04E30", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}

using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200053C")]
public class FileLoadException : IOException
{
	[Token(Token = "0x170005C9")]
	public override string Message
	{
		[Token(Token = "0x60027F2")]
		[Address(RVA = "0x4F04580", Offset = "0x4F04580", VA = "0x4F04580", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CA")]
	public string FileName
	{
		[Token(Token = "0x60027F3")]
		[Address(RVA = "0x4F04670", Offset = "0x4F04670", VA = "0x4F04670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CB")]
	public string FusionLog
	{
		[Token(Token = "0x60027F4")]
		[Address(RVA = "0x4F04680", Offset = "0x4F04680", VA = "0x4F04680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60027F0")]
	[Address(RVA = "0x4F04520", Offset = "0x4F04520", VA = "0x4F04520")]
	public FileLoadException()
	{
	}

	[Token(Token = "0x60027F1")]
	[Address(RVA = "0x4F04560", Offset = "0x4F04560", VA = "0x4F04560")]
	public FileLoadException(string message)
	{
	}

	[Token(Token = "0x60027F5")]
	[Address(RVA = "0x4F04690", Offset = "0x4F04690", VA = "0x4F04690", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60027F6")]
	[Address(RVA = "0x4F04860", Offset = "0x4F04860", VA = "0x4F04860")]
	protected FileLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60027F7")]
	[Address(RVA = "0x4F04920", Offset = "0x4F04920", VA = "0x4F04920", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60027F8")]
	[Address(RVA = "0x4F04610", Offset = "0x4F04610", VA = "0x4F04610")]
	internal static string FormatFileLoadExceptionMessage(string fileName, int hResult)
	{
		return null;
	}
}

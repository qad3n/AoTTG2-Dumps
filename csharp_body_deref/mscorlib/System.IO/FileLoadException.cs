// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileLoadException
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
[Token(Token = "0x200053C")]
public class FileLoadException : IOException
{
	[Token(Token = "0x170005C9")]
	public override string Message
	{
		[Token(Token = "0x60027F2")]
		[Address(RVA = "0x3BEA0A0", Offset = "0x3BEA0A0", VA = "0x3BEA0A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CA")]
	public string FileName
	{
		[Token(Token = "0x60027F3")]
		[Address(RVA = "0x3BEA190", Offset = "0x3BEA190", VA = "0x3BEA190")]
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
		[Address(RVA = "0x3BEA1A0", Offset = "0x3BEA1A0", VA = "0x3BEA1A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60027F0")]
	[Address(RVA = "0x3BEA040", Offset = "0x3BEA040", VA = "0x3BEA040")]
	public FileLoadException()
	{
	}

	[Token(Token = "0x60027F1")]
	[Address(RVA = "0x3BEA080", Offset = "0x3BEA080", VA = "0x3BEA080")]
	public FileLoadException(string message)
	{
	}

	[Token(Token = "0x60027F5")]
	[Address(RVA = "0x3BEA1B0", Offset = "0x3BEA1B0", VA = "0x3BEA1B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60027F6")]
	[Address(RVA = "0x3BEA380", Offset = "0x3BEA380", VA = "0x3BEA380")]
	protected FileLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60027F7")]
	[Address(RVA = "0x3BEA440", Offset = "0x3BEA440", VA = "0x3BEA440", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60027F8")]
	[Address(RVA = "0x3BEA130", Offset = "0x3BEA130", VA = "0x3BEA130")]
	internal static string FormatFileLoadExceptionMessage(string fileName, int hResult)
	{
		return null;
	}
}

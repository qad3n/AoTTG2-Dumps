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
[Token(Token = "0x2000665")]
public class FileLoadException : IOException
{
	[Token(Token = "0x170007E0")]
	public override string Message
	{
		[Token(Token = "0x60030C1")]
		[Address(RVA = "0x1ACDE10", Offset = "0x1ACC410", VA = "0x181ACDE10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E1")]
	public string FileName
	{
		[Token(Token = "0x60030C2")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E2")]
	public string FusionLog
	{
		[Token(Token = "0x60030C3")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60030BF")]
	[Address(RVA = "0x1ACDDC0", Offset = "0x1ACC3C0", VA = "0x181ACDDC0")]
	public FileLoadException()
	{
	}

	[Token(Token = "0x60030C0")]
	[Address(RVA = "0x1ACDDA0", Offset = "0x1ACC3A0", VA = "0x181ACDDA0")]
	public FileLoadException(string message)
	{
	}

	[Token(Token = "0x60030C4")]
	[Address(RVA = "0x1ACDAE0", Offset = "0x1ACC0E0", VA = "0x181ACDAE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60030C5")]
	[Address(RVA = "0x1ACDCD0", Offset = "0x1ACC2D0", VA = "0x181ACDCD0")]
	protected FileLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60030C6")]
	[Address(RVA = "0x1ACD9F0", Offset = "0x1ACBFF0", VA = "0x181ACD9F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60030C7")]
	[Address(RVA = "0x1ACD990", Offset = "0x1ACBF90", VA = "0x181ACD990")]
	internal static string FormatFileLoadExceptionMessage(string fileName, int hResult)
	{
		return null;
	}
}

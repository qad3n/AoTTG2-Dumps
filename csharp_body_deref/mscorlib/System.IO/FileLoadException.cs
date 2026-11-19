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
[Token(Token = "0x200063E")]
public class FileLoadException : IOException
{
	[Token(Token = "0x170007DD")]
	public override string Message
	{
		[Token(Token = "0x6003086")]
		[Address(RVA = "0x54649C0", Offset = "0x54639C0", VA = "0x54649C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DE")]
	public string FileName
	{
		[Token(Token = "0x6003087")]
		[Address(RVA = "0x5464AB0", Offset = "0x5463AB0", VA = "0x5464AB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DF")]
	public string FusionLog
	{
		[Token(Token = "0x6003088")]
		[Address(RVA = "0x5464AC0", Offset = "0x5463AC0", VA = "0x5464AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003084")]
	[Address(RVA = "0x5464960", Offset = "0x5463960", VA = "0x5464960")]
	public FileLoadException()
	{
	}

	[Token(Token = "0x6003085")]
	[Address(RVA = "0x54649A0", Offset = "0x54639A0", VA = "0x54649A0")]
	public FileLoadException(string message)
	{
	}

	[Token(Token = "0x6003089")]
	[Address(RVA = "0x5464AD0", Offset = "0x5463AD0", VA = "0x5464AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600308A")]
	[Address(RVA = "0x5464CA0", Offset = "0x5463CA0", VA = "0x5464CA0")]
	protected FileLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600308B")]
	[Address(RVA = "0x5464D60", Offset = "0x5463D60", VA = "0x5464D60", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600308C")]
	[Address(RVA = "0x5464A50", Offset = "0x5463A50", VA = "0x5464A50")]
	internal static string FormatFileLoadExceptionMessage(string fileName, int hResult)
	{
		return null;
	}
}

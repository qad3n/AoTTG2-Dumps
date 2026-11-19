// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FileWebResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002C5")]
public class FileWebResponse : WebResponse, ISerializable, ICloseEx
{
	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x19")]
	private bool m_closed;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x20")]
	private long m_contentLength;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x28")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x30")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x38")]
	private Stream m_stream;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x40")]
	private Uri m_uri;

	[Token(Token = "0x17000440")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001349")]
		[Address(RVA = "0x62BF380", Offset = "0x62BE380", VA = "0x62BF380", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000441")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x600134A")]
		[Address(RVA = "0x62BF410", Offset = "0x62BE410", VA = "0x62BF410", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x62BDE10", Offset = "0x62BCE10", VA = "0x62BDE10")]
	internal FileWebResponse(FileWebRequest request, Uri uri, FileAccess access, bool asyncHint)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x62BEFE0", Offset = "0x62BDFE0", VA = "0x62BEFE0")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x62BF200", Offset = "0x62BE200", VA = "0x62BF200", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x62BF220", Offset = "0x62BE220", VA = "0x62BF220", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x62BF390", Offset = "0x62BE390", VA = "0x62BF390")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x62BF420", Offset = "0x62BE420", VA = "0x62BF420", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x62BF4B0", Offset = "0x62BE4B0", VA = "0x62BF4B0", Slot = "15")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x62BF620", Offset = "0x62BE620", VA = "0x62BF620", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}
}

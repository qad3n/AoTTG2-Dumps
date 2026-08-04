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
[Token(Token = "0x200017C")]
public class FileWebResponse : WebResponse, ISerializable, ICloseEx
{
	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x19")]
	private bool m_closed;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x20")]
	private long m_contentLength;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x28")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x30")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x38")]
	private Stream m_stream;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x40")]
	private Uri m_uri;

	[Token(Token = "0x1700021A")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x4979570", Offset = "0x4979570", VA = "0x4979570", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x4979600", Offset = "0x4979600", VA = "0x4979600", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4977FE0", Offset = "0x4977FE0", VA = "0x4977FE0")]
	internal FileWebResponse(FileWebRequest request, Uri uri, FileAccess access, bool asyncHint)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x49791D0", Offset = "0x49791D0", VA = "0x49791D0")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x49793F0", Offset = "0x49793F0", VA = "0x49793F0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x4979410", Offset = "0x4979410", VA = "0x4979410", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4979580", Offset = "0x4979580", VA = "0x4979580")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4979610", Offset = "0x4979610", VA = "0x4979610", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x49796A0", Offset = "0x49796A0", VA = "0x49796A0", Slot = "15")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x4979830", Offset = "0x4979830", VA = "0x4979830", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}
}

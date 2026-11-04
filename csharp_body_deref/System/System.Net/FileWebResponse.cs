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
[Token(Token = "0x2000304")]
public class FileWebResponse : WebResponse, ISerializable, ICloseEx
{
	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x20")]
	private bool m_closed;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x28")]
	private long m_contentLength;

	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0x30")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0x38")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000BAB")]
	[FieldOffset(Offset = "0x40")]
	private Stream m_stream;

	[Token(Token = "0x4000BAC")]
	[FieldOffset(Offset = "0x48")]
	private Uri m_uri;

	[Token(Token = "0x1700046F")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x27CBC20", Offset = "0x27CA220", VA = "0x1827CBC20", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x27CBC40", Offset = "0x27CA240", VA = "0x1827CBC40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x27CB880", Offset = "0x27C9E80", VA = "0x1827CB880")]
	internal FileWebResponse(FileWebRequest request, Uri uri, FileAccess access, bool asyncHint)
	{
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x27CB610", Offset = "0x27C9C10", VA = "0x1827CB610")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x27CB5E0", Offset = "0x27C9BE0", VA = "0x1827CB5E0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001506")]
	[Address(RVA = "0x27CB350", Offset = "0x27C9950", VA = "0x1827CB350", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x27CB280", Offset = "0x27C9880", VA = "0x1827CB280")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x27CB310", Offset = "0x27C9910", VA = "0x1827CB310", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x27CB4E0", Offset = "0x27C9AE0", VA = "0x1827CB4E0", Slot = "15")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x27CB4A0", Offset = "0x27C9AA0", VA = "0x1827CB4A0", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}
}

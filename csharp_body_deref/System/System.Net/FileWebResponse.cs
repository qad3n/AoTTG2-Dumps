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
		[Address(RVA = "0x4654470", Offset = "0x4654470", VA = "0x4654470", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x4654500", Offset = "0x4654500", VA = "0x4654500", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4652EE0", Offset = "0x4652EE0", VA = "0x4652EE0")]
	internal FileWebResponse(FileWebRequest request, Uri uri, FileAccess access, bool asyncHint)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x46540D0", Offset = "0x46540D0", VA = "0x46540D0")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x46542F0", Offset = "0x46542F0", VA = "0x46542F0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x4654310", Offset = "0x4654310", VA = "0x4654310", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4654480", Offset = "0x4654480", VA = "0x4654480")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4654510", Offset = "0x4654510", VA = "0x4654510", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x46545A0", Offset = "0x46545A0", VA = "0x46545A0", Slot = "15")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x4654730", Offset = "0x4654730", VA = "0x4654730", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}
}

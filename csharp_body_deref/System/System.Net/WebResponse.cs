// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebResponse
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
[Token(Token = "0x20002DF")]
public abstract class WebResponse : MarshalByRefObject, ISerializable, IDisposable
{
	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x18")]
	private bool m_IsFromCache;

	[Token(Token = "0x17000429")]
	public virtual bool IsFromCache
	{
		[Token(Token = "0x6001421")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042A")]
	public virtual Uri ResponseUri
	{
		[Token(Token = "0x6001423")]
		[Address(RVA = "0x27DAFB0", Offset = "0x27D95B0", VA = "0x1827DAFB0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042B")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x27DAF80", Offset = "0x27D9580", VA = "0x1827DAF80", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected WebResponse()
	{
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected WebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x27CB5E0", Offset = "0x27C9BE0", VA = "0x1827CB5E0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x27DAEF0", Offset = "0x27D94F0", VA = "0x1827DAEF0", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x27DAED0", Offset = "0x27D94D0", VA = "0x1827DAED0", Slot = "10")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x27DAF50", Offset = "0x27D9550", VA = "0x1827DAF50", Slot = "12")]
	public virtual Stream GetResponseStream()
	{
		return null;
	}
}

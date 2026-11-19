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
[Token(Token = "0x20002A0")]
public abstract class WebResponse : MarshalByRefObject, ISerializable, IDisposable
{
	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0x18")]
	private bool m_IsFromCache;

	[Token(Token = "0x170003FA")]
	public virtual bool IsFromCache
	{
		[Token(Token = "0x6001263")]
		[Address(RVA = "0x62ACA60", Offset = "0x62ABA60", VA = "0x62ACA60", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003FB")]
	public virtual Uri ResponseUri
	{
		[Token(Token = "0x6001265")]
		[Address(RVA = "0x62ACA90", Offset = "0x62ABA90", VA = "0x62ACA90", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6001266")]
		[Address(RVA = "0x62ACAB0", Offset = "0x62ABAB0", VA = "0x62ACAB0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x62A4AE0", Offset = "0x62A3AE0", VA = "0x62A4AE0")]
	protected WebResponse()
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x62AC910", Offset = "0x62AB910", VA = "0x62AC910")]
	protected WebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x62AC920", Offset = "0x62AB920", VA = "0x62AC920", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x62AC940", Offset = "0x62AB940", VA = "0x62AC940", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x62AC950", Offset = "0x62AB950", VA = "0x62AC950", Slot = "9")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x62AC960", Offset = "0x62AB960", VA = "0x62AC960", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x62AC9D0", Offset = "0x62AB9D0", VA = "0x62AC9D0", Slot = "10")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x62ACA70", Offset = "0x62ABA70", VA = "0x62ACA70", Slot = "12")]
	public virtual Stream GetResponseStream()
	{
		return null;
	}
}

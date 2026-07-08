using System.IO;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000157")]
public abstract class WebResponse : MarshalByRefObject, ISerializable, IDisposable
{
	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x18")]
	private bool m_IsFromCache;

	[Token(Token = "0x170001D4")]
	public virtual bool IsFromCache
	{
		[Token(Token = "0x6000861")]
		[Address(RVA = "0x4640050", Offset = "0x4640050", VA = "0x4640050", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D5")]
	public virtual Uri ResponseUri
	{
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x4640090", Offset = "0x4640090", VA = "0x4640090", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x46400C0", Offset = "0x46400C0", VA = "0x46400C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x463FEF0", Offset = "0x463FEF0", VA = "0x463FEF0")]
	protected WebResponse()
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x463FF00", Offset = "0x463FF00", VA = "0x463FF00")]
	protected WebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x463FF10", Offset = "0x463FF10", VA = "0x463FF10", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x463FF30", Offset = "0x463FF30", VA = "0x463FF30", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x463FF40", Offset = "0x463FF40", VA = "0x463FF40", Slot = "9")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x463FF50", Offset = "0x463FF50", VA = "0x463FF50", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x463FFC0", Offset = "0x463FFC0", VA = "0x463FFC0", Slot = "10")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4640060", Offset = "0x4640060", VA = "0x4640060", Slot = "12")]
	public virtual Stream GetResponseStream()
	{
		return null;
	}
}

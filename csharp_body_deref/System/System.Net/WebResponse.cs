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
		[Address(RVA = "0x4965150", Offset = "0x4965150", VA = "0x4965150", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D5")]
	public virtual Uri ResponseUri
	{
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x4965190", Offset = "0x4965190", VA = "0x4965190", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x49651C0", Offset = "0x49651C0", VA = "0x49651C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x4964FF0", Offset = "0x4964FF0", VA = "0x4964FF0")]
	protected WebResponse()
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x4965000", Offset = "0x4965000", VA = "0x4965000")]
	protected WebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x4965010", Offset = "0x4965010", VA = "0x4965010", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x4965030", Offset = "0x4965030", VA = "0x4965030", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x4965040", Offset = "0x4965040", VA = "0x4965040", Slot = "9")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4965050", Offset = "0x4965050", VA = "0x4965050", Slot = "7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x49650C0", Offset = "0x49650C0", VA = "0x49650C0", Slot = "10")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4965160", Offset = "0x4965160", VA = "0x4965160", Slot = "12")]
	public virtual Stream GetResponseStream()
	{
		return null;
	}
}

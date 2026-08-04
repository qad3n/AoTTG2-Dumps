// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Claims.Claim
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Claims;

[Serializable]
[Token(Token = "0x2000330")]
public class Claim
{
	[Token(Token = "0x4000E4C")]
	[FieldOffset(Offset = "0x10")]
	private string m_issuer;

	[Token(Token = "0x4000E4D")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalIssuer;

	[Token(Token = "0x4000E4E")]
	[FieldOffset(Offset = "0x20")]
	private string m_type;

	[Token(Token = "0x4000E4F")]
	[FieldOffset(Offset = "0x28")]
	private string m_value;

	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x30")]
	private string m_valueType;

	[NonSerialized]
	[Token(Token = "0x4000E51")]
	[FieldOffset(Offset = "0x38")]
	private byte[] m_userSerializationData;

	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, string> m_properties;

	[NonSerialized]
	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x48")]
	private object m_propertyLock;

	[NonSerialized]
	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x50")]
	private ClaimsIdentity m_subject;

	[Token(Token = "0x1700031E")]
	public IDictionary<string, string> Properties
	{
		[Token(Token = "0x6001BE0")]
		[Address(RVA = "0x3B5B670", Offset = "0x3B5B670", VA = "0x3B5B670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031F")]
	public ClaimsIdentity Subject
	{
		[Token(Token = "0x6001BE1")]
		[Address(RVA = "0x3B5BBF0", Offset = "0x3B5BBF0", VA = "0x3B5BBF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x3B5BC00", Offset = "0x3B5BC00", VA = "0x3B5BC00")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000320")]
	public string Type
	{
		[Token(Token = "0x6001BE3")]
		[Address(RVA = "0x3B5BC10", Offset = "0x3B5BC10", VA = "0x3B5BC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000321")]
	public string Value
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x3B5BC20", Offset = "0x3B5BC20", VA = "0x3B5BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x3B5B3A0", Offset = "0x3B5B3A0", VA = "0x3B5B3A0")]
	public Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x3B5B3C0", Offset = "0x3B5B3C0", VA = "0x3B5B3C0")]
	internal Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject, string propertyKey, string propertyValue)
	{
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x3B5B7B0", Offset = "0x3B5B7B0", VA = "0x3B5B7B0")]
	protected Claim(Claim other, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x3B5BB90", Offset = "0x3B5BB90", VA = "0x3B5BB90")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x3B5BC30", Offset = "0x3B5BC30", VA = "0x3B5BC30", Slot = "4")]
	public virtual Claim Clone(ClaimsIdentity identity)
	{
		return null;
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x3B5BC80", Offset = "0x3B5BC80", VA = "0x3B5BC80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

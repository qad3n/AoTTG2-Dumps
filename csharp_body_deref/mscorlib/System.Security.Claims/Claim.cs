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
[Token(Token = "0x2000338")]
public class Claim
{
	[Token(Token = "0x4000DB9")]
	[FieldOffset(Offset = "0x10")]
	private string m_issuer;

	[Token(Token = "0x4000DBA")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalIssuer;

	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x20")]
	private string m_type;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x28")]
	private string m_value;

	[Token(Token = "0x4000DBD")]
	[FieldOffset(Offset = "0x30")]
	private string m_valueType;

	[NonSerialized]
	[Token(Token = "0x4000DBE")]
	[FieldOffset(Offset = "0x38")]
	private byte[] m_userSerializationData;

	[Token(Token = "0x4000DBF")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, string> m_properties;

	[NonSerialized]
	[Token(Token = "0x4000DC0")]
	[FieldOffset(Offset = "0x48")]
	private object m_propertyLock;

	[NonSerialized]
	[Token(Token = "0x4000DC1")]
	[FieldOffset(Offset = "0x50")]
	private ClaimsIdentity m_subject;

	[Token(Token = "0x1700031F")]
	public IDictionary<string, string> Properties
	{
		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x53652F0", Offset = "0x53642F0", VA = "0x53652F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000320")]
	public ClaimsIdentity Subject
	{
		[Token(Token = "0x6001C26")]
		[Address(RVA = "0x5365810", Offset = "0x5364810", VA = "0x5365810")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C27")]
		[Address(RVA = "0x5365820", Offset = "0x5364820", VA = "0x5365820")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000321")]
	public string Type
	{
		[Token(Token = "0x6001C28")]
		[Address(RVA = "0x5365830", Offset = "0x5364830", VA = "0x5365830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000322")]
	public string Value
	{
		[Token(Token = "0x6001C29")]
		[Address(RVA = "0x5365840", Offset = "0x5364840", VA = "0x5365840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C21")]
	[Address(RVA = "0x5365010", Offset = "0x5364010", VA = "0x5365010")]
	public Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001C22")]
	[Address(RVA = "0x5365030", Offset = "0x5364030", VA = "0x5365030")]
	internal Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject, string propertyKey, string propertyValue)
	{
	}

	[Token(Token = "0x6001C23")]
	[Address(RVA = "0x5365410", Offset = "0x5364410", VA = "0x5365410")]
	protected Claim(Claim other, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001C24")]
	[Address(RVA = "0x53657B0", Offset = "0x53647B0", VA = "0x53657B0")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x5365850", Offset = "0x5364850", VA = "0x5365850", Slot = "4")]
	public virtual Claim Clone(ClaimsIdentity identity)
	{
		return null;
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x53658A0", Offset = "0x53648A0", VA = "0x53658A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

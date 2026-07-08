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
		[Address(RVA = "0x4E75B50", Offset = "0x4E75B50", VA = "0x4E75B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031F")]
	public ClaimsIdentity Subject
	{
		[Token(Token = "0x6001BE1")]
		[Address(RVA = "0x4E760D0", Offset = "0x4E760D0", VA = "0x4E760D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x4E760E0", Offset = "0x4E760E0", VA = "0x4E760E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000320")]
	public string Type
	{
		[Token(Token = "0x6001BE3")]
		[Address(RVA = "0x4E760F0", Offset = "0x4E760F0", VA = "0x4E760F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000321")]
	public string Value
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x4E76100", Offset = "0x4E76100", VA = "0x4E76100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x4E75880", Offset = "0x4E75880", VA = "0x4E75880")]
	public Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x4E758A0", Offset = "0x4E758A0", VA = "0x4E758A0")]
	internal Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject, string propertyKey, string propertyValue)
	{
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x4E75C90", Offset = "0x4E75C90", VA = "0x4E75C90")]
	protected Claim(Claim other, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x4E76070", Offset = "0x4E76070", VA = "0x4E76070")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x4E76110", Offset = "0x4E76110", VA = "0x4E76110", Slot = "4")]
	public virtual Claim Clone(ClaimsIdentity identity)
	{
		return null;
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x4E76160", Offset = "0x4E76160", VA = "0x4E76160", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

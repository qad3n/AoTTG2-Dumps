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
[Token(Token = "0x200035F")]
public class Claim
{
	[Token(Token = "0x4000E59")]
	[FieldOffset(Offset = "0x10")]
	private string m_issuer;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalIssuer;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x20")]
	private string m_type;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x28")]
	private string m_value;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x30")]
	private string m_valueType;

	[NonSerialized]
	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x38")]
	private byte[] m_userSerializationData;

	[Token(Token = "0x4000E5F")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, string> m_properties;

	[NonSerialized]
	[Token(Token = "0x4000E60")]
	[FieldOffset(Offset = "0x48")]
	private object m_propertyLock;

	[NonSerialized]
	[Token(Token = "0x4000E61")]
	[FieldOffset(Offset = "0x50")]
	private ClaimsIdentity m_subject;

	[Token(Token = "0x17000320")]
	public IDictionary<string, string> Properties
	{
		[Token(Token = "0x6001C4E")]
		[Address(RVA = "0x19D3B80", Offset = "0x19D2180", VA = "0x1819D3B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000321")]
	public ClaimsIdentity Subject
	{
		[Token(Token = "0x6001C4F")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C50")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000322")]
	public string Type
	{
		[Token(Token = "0x6001C51")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000323")]
	public string Value
	{
		[Token(Token = "0x6001C52")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C4A")]
	[Address(RVA = "0x19D3510", Offset = "0x19D1B10", VA = "0x1819D3510")]
	public Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x19D38D0", Offset = "0x19D1ED0", VA = "0x1819D38D0")]
	internal Claim(string type, string value, string valueType, string issuer, string originalIssuer, ClaimsIdentity subject, string propertyKey, string propertyValue)
	{
	}

	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x19D3560", Offset = "0x19D1B60", VA = "0x1819D3560")]
	protected Claim(Claim other, ClaimsIdentity subject)
	{
	}

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x19D3430", Offset = "0x19D1A30", VA = "0x1819D3430")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x19D33C0", Offset = "0x19D19C0", VA = "0x1819D33C0", Slot = "4")]
	public virtual Claim Clone(ClaimsIdentity identity)
	{
		return null;
	}

	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x19D3490", Offset = "0x19D1A90", VA = "0x1819D3490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}

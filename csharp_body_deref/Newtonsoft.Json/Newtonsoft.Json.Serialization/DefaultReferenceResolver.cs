using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000107")]
internal class DefaultReferenceResolver : IReferenceResolver
{
	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x10")]
	private int _referenceCount;

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x3ADFC60", Offset = "0x3ADFC60", VA = "0x3ADFC60")]
	private BidirectionalDictionary<string, object> GetMappings(object context)
	{
		return null;
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x3ADFE50", Offset = "0x3ADFE50", VA = "0x3ADFE50", Slot = "4")]
	public object ResolveReference(object context, string reference)
	{
		return null;
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x3ADFEC0", Offset = "0x3ADFEC0", VA = "0x3ADFEC0", Slot = "5")]
	public string GetReference(object context, object value)
	{
		return null;
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x3ADFFB0", Offset = "0x3ADFFB0", VA = "0x3ADFFB0", Slot = "7")]
	public void AddReference(object context, string reference, object value)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x3AE0010", Offset = "0x3AE0010", VA = "0x3AE0010", Slot = "6")]
	public bool IsReferenced(object context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x3AE0070", Offset = "0x3AE0070", VA = "0x3AE0070")]
	public DefaultReferenceResolver()
	{
	}
}

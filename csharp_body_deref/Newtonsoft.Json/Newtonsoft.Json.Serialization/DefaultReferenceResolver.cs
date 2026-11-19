// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.DefaultReferenceResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x55CDD90", Offset = "0x55CCD90", VA = "0x55CDD90")]
	private BidirectionalDictionary<string, object> GetMappings(object context)
	{
		return null;
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x55CDF80", Offset = "0x55CCF80", VA = "0x55CDF80", Slot = "4")]
	public object ResolveReference(object context, string reference)
	{
		return null;
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x55CDFF0", Offset = "0x55CCFF0", VA = "0x55CDFF0", Slot = "5")]
	public string GetReference(object context, object value)
	{
		return null;
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x55CE0E0", Offset = "0x55CD0E0", VA = "0x55CE0E0", Slot = "7")]
	public void AddReference(object context, string reference, object value)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x55CE140", Offset = "0x55CD140", VA = "0x55CE140", Slot = "6")]
	public bool IsReferenced(object context, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x55CE1A0", Offset = "0x55CD1A0", VA = "0x55CE1A0")]
	public DefaultReferenceResolver()
	{
	}
}

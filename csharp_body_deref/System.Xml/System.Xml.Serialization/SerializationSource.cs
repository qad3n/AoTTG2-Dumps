// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.SerializationSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200010F")]
internal abstract class SerializationSource
{
	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x10")]
	private Type[] includedTypes;

	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x18")]
	private string namspace;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x20")]
	private bool canBeGenerated;

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x480A4E0", Offset = "0x480A4E0", VA = "0x480A4E0")]
	public SerializationSource(string namspace, Type[] includedTypes)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x480A530", Offset = "0x480A530", VA = "0x480A530")]
	protected bool BaseEquals(SerializationSource other)
	{
		return default(bool);
	}
}

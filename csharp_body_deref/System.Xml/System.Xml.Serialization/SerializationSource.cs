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
	[Address(RVA = "0x44CCD80", Offset = "0x44CCD80", VA = "0x44CCD80")]
	public SerializationSource(string namspace, Type[] includedTypes)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x44CCDD0", Offset = "0x44CCDD0", VA = "0x44CCDD0")]
	protected bool BaseEquals(SerializationSource other)
	{
		return default(bool);
	}
}

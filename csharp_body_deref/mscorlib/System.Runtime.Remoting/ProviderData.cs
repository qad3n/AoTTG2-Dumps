// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ProviderData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000350")]
internal class ProviderData
{
	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x28")]
	internal Hashtable CustomProperties;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x30")]
	internal IList CustomData;

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x536DCC0", Offset = "0x536CCC0", VA = "0x536DCC0")]
	public void CopyFrom(System.Runtime.Remoting.ProviderData other)
	{
	}

	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x5372500", Offset = "0x5371500", VA = "0x5372500")]
	public ProviderData()
	{
	}
}

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

[Token(Token = "0x2000377")]
internal class ProviderData
{
	[Token(Token = "0x4000EAB")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000EAC")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000EAE")]
	[FieldOffset(Offset = "0x28")]
	internal Hashtable CustomProperties;

	[Token(Token = "0x4000EAF")]
	[FieldOffset(Offset = "0x30")]
	internal IList CustomData;

	[Token(Token = "0x6001CE5")]
	[Address(RVA = "0x19DB510", Offset = "0x19D9B10", VA = "0x1819DB510")]
	public void CopyFrom(System.Runtime.Remoting.ProviderData other)
	{
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x19D9F40", Offset = "0x19D8540", VA = "0x1819D9F40")]
	public ProviderData()
	{
	}
}

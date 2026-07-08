using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000348")]
internal class ProviderData
{
	[Token(Token = "0x4000E9E")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000E9F")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000EA0")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000EA1")]
	[FieldOffset(Offset = "0x28")]
	internal Hashtable CustomProperties;

	[Token(Token = "0x4000EA2")]
	[FieldOffset(Offset = "0x30")]
	internal IList CustomData;

	[Token(Token = "0x6001C76")]
	[Address(RVA = "0x4E7F080", Offset = "0x4E7F080", VA = "0x4E7F080")]
	public void CopyFrom(System.Runtime.Remoting.ProviderData other)
	{
	}

	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x4E83C00", Offset = "0x4E83C00", VA = "0x4E83C00")]
	public ProviderData()
	{
	}
}

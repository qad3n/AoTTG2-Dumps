using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000109")]
public class UnreferencedObjectEventArgs : EventArgs
{
	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x10")]
	private object o;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x18")]
	private string id;

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x44CC1E0", Offset = "0x44CC1E0", VA = "0x44CC1E0")]
	public UnreferencedObjectEventArgs(object o, string id)
	{
	}
}

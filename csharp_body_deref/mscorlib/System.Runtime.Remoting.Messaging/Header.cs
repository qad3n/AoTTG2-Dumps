using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003AA")]
[ComVisible(true)]
public class Header
{
	[Token(Token = "0x4000F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string HeaderNamespace;

	[Token(Token = "0x4000F74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool MustUnderstand;

	[Token(Token = "0x4000F75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4000F76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public object Value;
}

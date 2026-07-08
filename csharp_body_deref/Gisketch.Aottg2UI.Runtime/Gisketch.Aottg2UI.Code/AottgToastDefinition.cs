using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006D")]
public sealed class AottgToastDefinition
{
	[Token(Token = "0x4000234")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public AottgToastVariant Variant;

	[Token(Token = "0x4000235")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Icon;

	[Token(Token = "0x4000236")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Title;

	[Token(Token = "0x4000237")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Content;

	[Token(Token = "0x4000238")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string UpdateKey;

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x39F6540", Offset = "0x39F6540", VA = "0x39F6540")]
	public AottgToastDefinition(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
	}
}

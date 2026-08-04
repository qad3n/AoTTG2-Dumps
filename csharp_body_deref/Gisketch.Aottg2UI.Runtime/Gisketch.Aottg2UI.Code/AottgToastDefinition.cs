// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgToastDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgToastDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006F")]
public sealed class AottgToastDefinition
{
	[Token(Token = "0x400023C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public AottgToastVariant Variant;

	[Token(Token = "0x400023D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Icon;

	[Token(Token = "0x400023E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Title;

	[Token(Token = "0x400023F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Content;

	[Token(Token = "0x4000240")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string UpdateKey;

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3A61700", Offset = "0x3A61700", VA = "0x3A61700")]
	public AottgToastDefinition(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgToastDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgToastDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000089")]
public sealed class AottgToastDefinition
{
	[Token(Token = "0x40002DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public AottgToastVariant Variant;

	[Token(Token = "0x40002DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Icon;

	[Token(Token = "0x40002DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Title;

	[Token(Token = "0x40002DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Content;

	[Token(Token = "0x40002DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string UpdateKey;

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x5267CC0", Offset = "0x5266CC0", VA = "0x5267CC0")]
	public AottgToastDefinition(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgToastDefinition.c (Gisketch.Aottg2UI.Code.AottgToastDefinition$$.ctor): clean
		base();
		this.Variant = variant;
		this.Icon = icon;
		this.Title = title;
		this.Content = content;
		this.UpdateKey = updateKey;
		return;
	}
}

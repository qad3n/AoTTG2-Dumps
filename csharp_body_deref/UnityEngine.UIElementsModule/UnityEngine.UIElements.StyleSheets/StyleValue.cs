using System.Diagnostics;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000543")]
[DebuggerDisplay("id = {id}, keyword = {keyword}, number = {number}, boolean = {boolean}, color = {color}, object = {resource}")]
internal struct StyleValue
{
	[Token(Token = "0x400121E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public StylePropertyId id;

	[Token(Token = "0x400121F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public StyleKeyword keyword;

	[Token(Token = "0x4001220")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public float number;

	[Token(Token = "0x4001221")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public Length length;

	[Token(Token = "0x4001222")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public Color color;

	[Token(Token = "0x4001223")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public GCHandle resource;

	[Token(Token = "0x4001224")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public BackgroundPosition position;

	[Token(Token = "0x4001225")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public BackgroundRepeat repeat;
}

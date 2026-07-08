using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000235")]
[Flags]
internal enum VersionChangeType
{
	[Token(Token = "0x40007F8")]
	Bindings = 1,
	[Token(Token = "0x40007F9")]
	ViewData = 2,
	[Token(Token = "0x40007FA")]
	Hierarchy = 4,
	[Token(Token = "0x40007FB")]
	Layout = 8,
	[Token(Token = "0x40007FC")]
	StyleSheet = 0x10,
	[Token(Token = "0x40007FD")]
	Styles = 0x20,
	[Token(Token = "0x40007FE")]
	Overflow = 0x40,
	[Token(Token = "0x40007FF")]
	BorderRadius = 0x80,
	[Token(Token = "0x4000800")]
	BorderWidth = 0x100,
	[Token(Token = "0x4000801")]
	Transform = 0x200,
	[Token(Token = "0x4000802")]
	Size = 0x400,
	[Token(Token = "0x4000803")]
	Repaint = 0x800,
	[Token(Token = "0x4000804")]
	Opacity = 0x1000,
	[Token(Token = "0x4000805")]
	Color = 0x2000,
	[Token(Token = "0x4000806")]
	RenderHints = 0x4000,
	[Token(Token = "0x4000807")]
	TransitionProperty = 0x8000,
	[Token(Token = "0x4000808")]
	EventCallbackCategories = 0x10000,
	[Token(Token = "0x4000809")]
	DisableRendering = 0x20000
}

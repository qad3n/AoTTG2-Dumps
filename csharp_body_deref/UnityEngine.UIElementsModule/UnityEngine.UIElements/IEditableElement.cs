using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A9")]
internal interface IEditableElement
{
	[Token(Token = "0x170000A3")]
	internal Action editingStarted
	{
		[Token(Token = "0x6000477")]
		get;
	}

	[Token(Token = "0x170000A4")]
	internal Action editingEnded
	{
		[Token(Token = "0x6000478")]
		get;
	}
}

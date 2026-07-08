using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000028")]
internal class SliderState
{
	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x10")]
	public float dragStartPos;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x14")]
	public float dragStartValue;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x18")]
	public bool isDragging;

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4B39DE0", Offset = "0x4B39DE0", VA = "0x4B39DE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public SliderState()
	{
	}
}

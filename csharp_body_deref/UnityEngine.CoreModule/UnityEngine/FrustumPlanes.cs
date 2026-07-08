using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x200011A")]
public struct FrustumPlanes
{
	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x0")]
	public float left;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x4")]
	public float right;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x8")]
	public float bottom;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0xC")]
	public float top;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x10")]
	public float zNear;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x14")]
	public float zFar;
}

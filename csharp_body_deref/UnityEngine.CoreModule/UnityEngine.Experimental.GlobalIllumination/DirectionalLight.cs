// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x200033D")]
public struct DirectionalLight
{
	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x0")]
	public int instanceID;

	[Token(Token = "0x4000A59")]
	[FieldOffset(Offset = "0x4")]
	public bool shadow;

	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x5")]
	public LightMode mode;

	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 position;

	[Token(Token = "0x4000A5C")]
	[FieldOffset(Offset = "0x14")]
	public Quaternion orientation;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0x24")]
	public LinearColor color;

	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x34")]
	public LinearColor indirectColor;

	[Token(Token = "0x4000A5F")]
	[FieldOffset(Offset = "0x44")]
	public float penumbraWidthRadian;

	[Token(Token = "0x4000A60")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("Directional lights support cookies now. In order to position the cookie projection in the world, a position and full orientation are necessary. Use the position and orientation members instead of the direction parameter.", true)]
	public Vector3 direction;
}

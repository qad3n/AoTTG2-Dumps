// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DrawParams
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058D")]
internal class DrawParams
{
	[Token(Token = "0x4001358")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Rect k_UnlimitedRect;

	[Token(Token = "0x4001359")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Rect k_FullNormalizedRect;

	[Token(Token = "0x400135A")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Stack<Matrix4x4> view;

	[Token(Token = "0x400135B")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Stack<Rect> scissor;

	[Token(Token = "0x400135C")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<Material> defaultMaterial;

	[Token(Token = "0x400135D")]
	[FieldOffset(Offset = "0x28")]
	internal readonly List<MaterialPropertyBlock> props;

	[Token(Token = "0x400135E")]
	[FieldOffset(Offset = "0x30")]
	internal Vector2 boundsMin;

	[Token(Token = "0x6002980")]
	[Address(RVA = "0x317EA60", Offset = "0x317D060", VA = "0x18317EA60")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002981")]
	[Address(RVA = "0x317ECC0", Offset = "0x317D2C0", VA = "0x18317ECC0")]
	public DrawParams()
	{
	}
}

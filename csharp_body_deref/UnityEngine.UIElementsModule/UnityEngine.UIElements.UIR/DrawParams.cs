// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DrawParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E7")]
internal class DrawParams
{
	[Token(Token = "0x4001601")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Rect k_UnlimitedRect;

	[Token(Token = "0x4001602")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Rect k_FullNormalizedRect;

	[Token(Token = "0x4001603")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Stack<Matrix4x4> view;

	[Token(Token = "0x4001604")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Stack<Rect> scissor;

	[Token(Token = "0x4001605")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<Material> defaultMaterial;

	[Token(Token = "0x4001606")]
	[FieldOffset(Offset = "0x28")]
	internal readonly List<MaterialPropertyBlock> props;

	[Token(Token = "0x4001607")]
	[FieldOffset(Offset = "0x30")]
	internal Vector2 boundsMin;

	[Token(Token = "0x6002BBA")]
	[Address(RVA = "0x6BB77F0", Offset = "0x6BB67F0", VA = "0x6BB77F0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002BBB")]
	[Address(RVA = "0x6BB2000", Offset = "0x6BB1000", VA = "0x6BB2000")]
	public DrawParams()
	{
	}
}

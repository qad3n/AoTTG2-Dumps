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

[Token(Token = "0x20004F1")]
internal class DrawParams
{
	[Token(Token = "0x4001071")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Rect k_UnlimitedRect;

	[Token(Token = "0x4001072")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Rect k_FullNormalizedRect;

	[Token(Token = "0x4001073")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Stack<Matrix4x4> view;

	[Token(Token = "0x4001074")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Stack<Rect> scissor;

	[Token(Token = "0x4001075")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<RenderTexture> renderTexture;

	[Token(Token = "0x4001076")]
	[FieldOffset(Offset = "0x28")]
	internal readonly List<Material> defaultMaterial;

	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x4FB2650", Offset = "0x4FB2650", VA = "0x4FB2650")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x4FB2840", Offset = "0x4FB2840", VA = "0x4FB2840")]
	public DrawParams()
	{
	}
}

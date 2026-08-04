// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.StencilMaterial
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.UI;

[Token(Token = "0x2000072")]
public static class StencilMaterial
{
	[Token(Token = "0x2000073")]
	private class MatEntry
	{
		[Token(Token = "0x400023D")]
		[FieldOffset(Offset = "0x10")]
		public Material baseMat;

		[Token(Token = "0x400023E")]
		[FieldOffset(Offset = "0x18")]
		public Material customMat;

		[Token(Token = "0x400023F")]
		[FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000240")]
		[FieldOffset(Offset = "0x24")]
		public int stencilId;

		[Token(Token = "0x4000241")]
		[FieldOffset(Offset = "0x28")]
		public StencilOp operation;

		[Token(Token = "0x4000242")]
		[FieldOffset(Offset = "0x2C")]
		public CompareFunction compareFunction;

		[Token(Token = "0x4000243")]
		[FieldOffset(Offset = "0x30")]
		public int readMask;

		[Token(Token = "0x4000244")]
		[FieldOffset(Offset = "0x34")]
		public int writeMask;

		[Token(Token = "0x4000245")]
		[FieldOffset(Offset = "0x38")]
		public bool useAlphaClip;

		[Token(Token = "0x4000246")]
		[FieldOffset(Offset = "0x3C")]
		public ColorWriteMask colorMask;

		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x50E88B0", Offset = "0x50E88B0", VA = "0x50E88B0")]
		public MatEntry()
		{
		}
	}

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x0")]
	private static List<MatEntry> m_List;

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x50E7C60", Offset = "0x50E7C60", VA = "0x50E7C60")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use Material.Add instead.", true)]
	public static Material Add(Material baseMat, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x50E7C70", Offset = "0x50E7C70", VA = "0x50E7C70")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask)
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x50E8800", Offset = "0x50E8800", VA = "0x50E8800")]
	private static void LogWarningWhenNotInBatchmode(string warning, Object context)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x50E7CF0", Offset = "0x50E7CF0", VA = "0x50E7CF0")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask, int readMask, int writeMask)
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x50E88C0", Offset = "0x50E88C0", VA = "0x50E88C0")]
	public static void Remove(Material customMat)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x50E8A90", Offset = "0x50E8A90", VA = "0x50E8A90")]
	public static void ClearAll()
	{
	}
}

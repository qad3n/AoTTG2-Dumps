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
		[Address(RVA = "0x4DC0F60", Offset = "0x4DC0F60", VA = "0x4DC0F60")]
		public MatEntry()
		{
		}
	}

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x0")]
	private static List<MatEntry> m_List;

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4DC0310", Offset = "0x4DC0310", VA = "0x4DC0310")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use Material.Add instead.", true)]
	public static Material Add(Material baseMat, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4DC0320", Offset = "0x4DC0320", VA = "0x4DC0320")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask)
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4DC0EB0", Offset = "0x4DC0EB0", VA = "0x4DC0EB0")]
	private static void LogWarningWhenNotInBatchmode(string warning, Object context)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4DC03A0", Offset = "0x4DC03A0", VA = "0x4DC03A0")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask, int readMask, int writeMask)
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4DC0F70", Offset = "0x4DC0F70", VA = "0x4DC0F70")]
	public static void Remove(Material customMat)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4DC1140", Offset = "0x4DC1140", VA = "0x4DC1140")]
	public static void ClearAll()
	{
	}
}

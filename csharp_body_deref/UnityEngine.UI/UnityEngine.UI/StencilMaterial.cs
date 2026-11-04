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

[Token(Token = "0x2000070")]
public static class StencilMaterial
{
	[Token(Token = "0x2000071")]
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

		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x32DA1A0", Offset = "0x32D87A0", VA = "0x1832DA1A0")]
		public MatEntry()
		{
		}
	}

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x0")]
	private static List<MatEntry> m_List;

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use Material.Add instead.", true)]
	public static Material Add(Material baseMat, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x32EA3B0", Offset = "0x32E89B0", VA = "0x1832EA3B0")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask)
	{
		return null;
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x32EB010", Offset = "0x32E9610", VA = "0x1832EB010")]
	private static void LogWarningWhenNotInBatchmode(string warning, Object context)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x32EA440", Offset = "0x32E8A40", VA = "0x1832EA440")]
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask, int readMask, int writeMask)
	{
		return null;
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x32EB0A0", Offset = "0x32E96A0", VA = "0x1832EB0A0")]
	public static void Remove(Material customMat)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x32EAEA0", Offset = "0x32E94A0", VA = "0x1832EAEA0")]
	public static void ClearAll()
	{
	}
}

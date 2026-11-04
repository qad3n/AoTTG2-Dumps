// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RaycastHelper
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/RaycastHelper.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20008C7")]
internal static class RaycastHelper
{
	[Token(Token = "0x20008C8")]
	private class DistanceComparer : IComparer<RaycastHit>
	{
		[Token(Token = "0x600535D")]
		[Address(RVA = "0x2336490", Offset = "0x2334A90", VA = "0x182336490", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x600535E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DistanceComparer()
		{
		}
	}

	[Token(Token = "0x4002B9B")]
	public const int MaxHits = 64;

	[Token(Token = "0x4002B9C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DistanceComparer _comparer;

	[Token(Token = "0x600535A")]
	[Address(RVA = "0x233EA40", Offset = "0x233D040", VA = "0x18233EA40")]
	public static int SortedRaycast(Ray ray, RaycastHit[] results, float distance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x600535B")]
	[Address(RVA = "0x233EB40", Offset = "0x233D140", VA = "0x18233EB40")]
	public static int SortedRaycast(Vector3 origin, Vector3 direction, RaycastHit[] results, float distance, int layerMask)
	{
		return default(int);
	}
}

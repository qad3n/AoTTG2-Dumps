// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RaycastHelper
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RaycastHelper.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000932")]
internal static class RaycastHelper
{
	[Token(Token = "0x2000933")]
	private class DistanceComparer : IComparer<RaycastHit>
	{
		[Token(Token = "0x60056B8")]
		[Address(RVA = "0x5CF0870", Offset = "0x5CEF870", VA = "0x5CF0870", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x60056B9")]
		[Address(RVA = "0x5CF0860", Offset = "0x5CEF860", VA = "0x5CF0860")]
		public DistanceComparer()
		{
		}
	}

	[Token(Token = "0x4002E54")]
	public const int MaxHits = 64;

	[Token(Token = "0x4002E55")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DistanceComparer _comparer;

	[Token(Token = "0x60056B5")]
	[Address(RVA = "0x5CF05E0", Offset = "0x5CEF5E0", VA = "0x5CF05E0")]
	public static int SortedRaycast(Ray ray, RaycastHit[] results, float distance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x60056B6")]
	[Address(RVA = "0x5CF06D0", Offset = "0x5CEF6D0", VA = "0x5CF06D0")]
	public static int SortedRaycast(Vector3 origin, Vector3 direction, RaycastHit[] results, float distance, int layerMask)
	{
		return default(int);
	}
}

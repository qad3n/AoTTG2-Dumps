// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RaycastHelper
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RaycastHelper.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Utility/RaycastHelper.c (Utility.RaycastHelper.DistanceComparer$$Compare): clean
			int iVar1;

			x.distance;
			return iVar1;
		}

		[Token(Token = "0x60056B9")]
		[Address(RVA = "0x5CF0860", Offset = "0x5CEF860", VA = "0x5CF0860")]
		public DistanceComparer()
		{
			// Lifted from source/cpp/Utility/RaycastHelper.c (Utility.RaycastHelper.DistanceComparer$$.ctor): clean
			base();
			return;
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
		// Lifted from source/cpp/Utility/RaycastHelper.c (Utility.RaycastHelper$$SortedRaycast): clean
		int length;

		length = Physics.RaycastNonAlloc(ray, results, distance, layerMask);
		Array.Sort<RaycastHit>(results, 0, length, (IComparer<T>)RaycastHelper._comparer);
		return length;
	}

	[Token(Token = "0x60056B6")]
	[Address(RVA = "0x5CF06D0", Offset = "0x5CEF6D0", VA = "0x5CF06D0")]
	public static int SortedRaycast(Vector3 origin, Vector3 direction, RaycastHit[] results, float distance, int layerMask)
	{
		// Lifted from source/cpp/Utility/RaycastHelper.c (Utility.RaycastHelper$$SortedRaycast): clean
		int length;

		length = Physics.RaycastNonAlloc(origin, direction, results, distance, layerMask);
		Array.Sort<RaycastHit>(results, 0, length, (IComparer<T>)RaycastHelper._comparer);
		return length;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/RaycastHelper.c.

	// Utility.RaycastHelper$$.cctor: clean
	static RaycastHelper()
	{
		object __this;

		__this = new RaycastHelper.DistanceComparer();
		RaycastHelper._comparer =(RaycastHelper.DistanceComparer)__this;
		return;
	}
}

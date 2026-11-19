// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SweepLineRectUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001E8")]
public static class SweepLineRectUtils
{
	[Token(Token = "0x20001E9")]
	private struct EventComparer : IComparer<Vector4>
	{
		[Token(Token = "0x6000E98")]
		[Address(RVA = "0x654FD60", Offset = "0x654ED60", VA = "0x654FD60", Slot = "4")]
		public int Compare(Vector4 a, Vector4 b)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001EA")]
	private struct ActiveComparer : IComparer<Vector2>
	{
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x654FDB0", Offset = "0x654EDB0", VA = "0x654FDB0", Slot = "4")]
		public int Compare(Vector2 a, Vector2 b)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400095E")]
	[FieldOffset(Offset = "0x0")]
	private static Vector4[] s_EventsBuffer;

	[Token(Token = "0x400095F")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2[] s_ActiveBuffer;

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x65479C0", Offset = "0x65469C0", VA = "0x65479C0")]
	public static float CalculateRectUnionArea(List<Rect> rects)
	{
		return default(float);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x654FC10", Offset = "0x654EC10", VA = "0x654FC10")]
	private static float MergeLengthY(Vector2[] activeBuffer, int count)
	{
		return default(float);
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x654F600", Offset = "0x654E600", VA = "0x654F600")]
	private static float CalculateRectUnionArea(Vector4[] eventsBuffer, Vector2[] activeBuffer, int eventCount)
	{
		return default(float);
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x654F470", Offset = "0x654E470", VA = "0x654F470")]
	private static void InsertEvents(in Rect rect, Vector4[] eventsBuffer, ref int eventCount)
	{
	}
}

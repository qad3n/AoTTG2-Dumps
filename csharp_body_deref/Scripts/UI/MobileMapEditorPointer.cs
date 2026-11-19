// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileMapEditorPointer
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileMapEditorPointer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077D")]
internal class MobileMapEditorPointer
{
	[Token(Token = "0x40025C4")]
	[FieldOffset(Offset = "0x10")]
	private int _selectPointerId;

	[Token(Token = "0x40025C5")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _lastPosition;

	[Token(Token = "0x40025C6")]
	[FieldOffset(Offset = "0x0")]
	private static int _gizmoPointerId;

	[Token(Token = "0x40025C7")]
	[FieldOffset(Offset = "0x4")]
	private static Vector3 _gizmoLastPosition;

	[Token(Token = "0x17000C42")]
	public static bool Enabled
	{
		[Token(Token = "0x6004846")]
		[Address(RVA = "0x5BB1780", Offset = "0x5BB0780", VA = "0x5BB1780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004847")]
	[Address(RVA = "0x5BB17E0", Offset = "0x5BB07E0", VA = "0x5BB17E0")]
	public bool TryGetSelectDown(out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x6004848")]
	[Address(RVA = "0x5BB1A40", Offset = "0x5BB0A40", VA = "0x5BB1A40")]
	public bool TryGetSelectUp(out Vector3 releasePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6004849")]
	[Address(RVA = "0x5BB1BE0", Offset = "0x5BB0BE0", VA = "0x5BB1BE0")]
	public bool TryGetPointerPosition(out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600484A")]
	[Address(RVA = "0x5BB1D60", Offset = "0x5BB0D60", VA = "0x5BB1D60")]
	public static bool TryGetGizmoPointerDown(out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600484B")]
	[Address(RVA = "0x5BB1F70", Offset = "0x5BB0F70", VA = "0x5BB1F70")]
	public static bool TryGetGizmoPointerPosition(out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600484C")]
	[Address(RVA = "0x5BB21B0", Offset = "0x5BB11B0", VA = "0x5BB21B0")]
	public static void CancelGizmoPointer()
	{
	}

	[Token(Token = "0x600484D")]
	[Address(RVA = "0x5BB19A0", Offset = "0x5BB09A0", VA = "0x5BB19A0")]
	private static bool IsTouchOverUI(int fingerId)
	{
		return default(bool);
	}

	[Token(Token = "0x600484E")]
	[Address(RVA = "0x5BB2220", Offset = "0x5BB1220", VA = "0x5BB2220")]
	public MobileMapEditorPointer()
	{
	}
}

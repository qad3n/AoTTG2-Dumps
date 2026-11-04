// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReparentObjectsCommand
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/ReparentObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200013D")]
internal class ReparentObjectsCommand : BaseCommand
{
	[Token(Token = "0x200013E")]
	private class ObjectState
	{
		[Token(Token = "0x4000724")]
		[FieldOffset(Offset = "0x10")]
		public int Parent;

		[Token(Token = "0x4000725")]
		[FieldOffset(Offset = "0x14")]
		public Vector3 Position;

		[Token(Token = "0x4000726")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 Rotation;

		[Token(Token = "0x4000727")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 Scale;

		[Token(Token = "0x600062B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ObjectState()
		{
		}
	}

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, ObjectState> _oldStates;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, ObjectState> _newStates;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, int> _targetParents;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x28")]
	private bool _capturedNewState;

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x21FACC0", Offset = "0x21F92C0", VA = "0x1821FACC0")]
	public ReparentObjectsCommand(List<MapObject> mapObjects, int newParentId)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x21FA7F0", Offset = "0x21F8DF0", VA = "0x1821FA7F0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x21FACB0", Offset = "0x21F92B0", VA = "0x1821FACB0", Slot = "5")]
	public override void Unexecute()
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x21FA150", Offset = "0x21F8750", VA = "0x1821FA150")]
	private void ApplyStates(Dictionary<int, ObjectState> states)
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x21FA5C0", Offset = "0x21F8BC0", VA = "0x1821FA5C0")]
	private ObjectState CaptureState(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x21F9F00", Offset = "0x21F8500", VA = "0x1821F9F00")]
	private void ApplyState(MapObject obj, ObjectState state)
	{
	}
}

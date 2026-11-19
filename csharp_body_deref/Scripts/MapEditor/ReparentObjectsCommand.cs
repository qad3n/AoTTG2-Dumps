// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReparentObjectsCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ReparentObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000145")]
internal class ReparentObjectsCommand : BaseCommand
{
	[Token(Token = "0x2000146")]
	private class ObjectState
	{
		[Token(Token = "0x4000770")]
		[FieldOffset(Offset = "0x10")]
		public int Parent;

		[Token(Token = "0x4000771")]
		[FieldOffset(Offset = "0x14")]
		public Vector3 Position;

		[Token(Token = "0x4000772")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 Rotation;

		[Token(Token = "0x4000773")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 Scale;

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x5B8FE60", Offset = "0x5B8EE60", VA = "0x5B8FE60")]
		public ObjectState()
		{
		}
	}

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, ObjectState> _oldStates;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, ObjectState> _newStates;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, int> _targetParents;

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x28")]
	private bool _capturedNewState;

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x5B8C480", Offset = "0x5B8B480", VA = "0x5B8C480")]
	public ReparentObjectsCommand(List<MapObject> mapObjects, int newParentId)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x5B8F2A0", Offset = "0x5B8E2A0", VA = "0x5B8F2A0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x5B8FE50", Offset = "0x5B8EE50", VA = "0x5B8FE50", Slot = "5")]
	public override void Unexecute()
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x5B8F990", Offset = "0x5B8E990", VA = "0x5B8F990")]
	private void ApplyStates(Dictionary<int, ObjectState> states)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x5B8F0F0", Offset = "0x5B8E0F0", VA = "0x5B8F0F0")]
	private ObjectState CaptureState(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x5B8F7D0", Offset = "0x5B8E7D0", VA = "0x5B8F7D0")]
	private void ApplyState(MapObject obj, ObjectState state)
	{
	}
}

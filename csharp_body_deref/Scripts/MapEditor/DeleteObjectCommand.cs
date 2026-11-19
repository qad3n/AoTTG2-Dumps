// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.DeleteObjectCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/DeleteObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000140")]
internal class DeleteObjectCommand : BaseCommand
{
	[Token(Token = "0x2000141")]
	private struct OrphanState
	{
		[Token(Token = "0x400075D")]
		[FieldOffset(Offset = "0x0")]
		public int OriginalParentId;

		[Token(Token = "0x400075E")]
		[FieldOffset(Offset = "0x4")]
		public Vector3 LocalPosition;

		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 LocalRotation;

		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 LocalScale;
	}

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, OrphanState> _orphans;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _oldOrder;

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x5B8C760", Offset = "0x5B8B760", VA = "0x5B8C760")]
	public DeleteObjectCommand(List<MapObject> objs, bool includeDescendants)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x5B8D7B0", Offset = "0x5B8C7B0", VA = "0x5B8D7B0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x5B8D970", Offset = "0x5B8C970", VA = "0x5B8D970", Slot = "5")]
	public override void Unexecute()
	{
	}
}

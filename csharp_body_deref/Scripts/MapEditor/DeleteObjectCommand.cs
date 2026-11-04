// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.DeleteObjectCommand
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/DeleteObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000138")]
internal class DeleteObjectCommand : BaseCommand
{
	[Token(Token = "0x2000139")]
	private struct OrphanState
	{
		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x0")]
		public int OriginalParentId;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x4")]
		public Vector3 LocalPosition;

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 LocalRotation;

		[Token(Token = "0x4000714")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 LocalScale;
	}

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, OrphanState> _orphans;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _oldOrder;

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x21EE3E0", Offset = "0x21EC9E0", VA = "0x1821EE3E0")]
	public DeleteObjectCommand(List<MapObject> objs, bool includeDescendants)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x21EDA90", Offset = "0x21EC090", VA = "0x1821EDA90", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x21EDC20", Offset = "0x21EC220", VA = "0x1821EDC20", Slot = "5")]
	public override void Unexecute()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformRotationCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformRotationCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010A")]
internal class TransformRotationCommand : BaseCommand
{
	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x423AD00", Offset = "0x423AD00", VA = "0x423AD00")]
	public TransformRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x423B1E0", Offset = "0x423B1E0", VA = "0x423B1E0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x423B3C0", Offset = "0x423B3C0", VA = "0x423B3C0", Slot = "5")]
	public override void Unexecute()
	{
	}
}

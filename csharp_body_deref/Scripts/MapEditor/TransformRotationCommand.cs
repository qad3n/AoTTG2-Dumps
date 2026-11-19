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

[Token(Token = "0x2000149")]
internal class TransformRotationCommand : BaseCommand
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x5B911A0", Offset = "0x5B901A0", VA = "0x5B911A0")]
	public TransformRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x5B915E0", Offset = "0x5B905E0", VA = "0x5B915E0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x5B917D0", Offset = "0x5B907D0", VA = "0x5B917D0", Slot = "5")]
	public override void Unexecute()
	{
	}
}

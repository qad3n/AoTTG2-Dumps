// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformScaleCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformScaleCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010B")]
internal class TransformScaleCommand : BaseCommand
{
	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldScales;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newScales;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x423B5A0", Offset = "0x423B5A0", VA = "0x423B5A0")]
	public TransformScaleCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x423BAE0", Offset = "0x423BAE0", VA = "0x423BAE0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x423BCD0", Offset = "0x423BCD0", VA = "0x423BCD0", Slot = "5")]
	public override void Unexecute()
	{
	}
}

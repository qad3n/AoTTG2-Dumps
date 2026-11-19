// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.RulerMeasurement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/RulerMeasurement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace MapEditor;

[Token(Token = "0x2000154")]
public class RulerMeasurement
{
	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x10")]
	public Vector3 Origin;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x1C")]
	public Vector3 End;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x28")]
	public Color255 Color;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x30")]
	internal GameObject Root;

	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x38")]
	internal LineRenderer Line;

	[Token(Token = "0x40007C8")]
	[FieldOffset(Offset = "0x40")]
	internal Transform OriginHandle;

	[Token(Token = "0x40007C9")]
	[FieldOffset(Offset = "0x48")]
	internal Transform EndHandle;

	[Token(Token = "0x40007CA")]
	[FieldOffset(Offset = "0x50")]
	internal TextMesh Label;

	[Token(Token = "0x170000D5")]
	public float Length
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x5CB6A00", Offset = "0x5CB5A00", VA = "0x5CB6A00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x5CB6AF0", Offset = "0x5CB5AF0", VA = "0x5CB6AF0")]
	public RulerMeasurement()
	{
	}
}

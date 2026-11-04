// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.RulerMeasurement
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/RulerMeasurement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace MapEditor;

[Token(Token = "0x200014C")]
public class RulerMeasurement
{
	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x10")]
	public Vector3 Origin;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x1C")]
	public Vector3 End;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x28")]
	public Color255 Color;

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x30")]
	internal GameObject Root;

	[Token(Token = "0x400077A")]
	[FieldOffset(Offset = "0x38")]
	internal LineRenderer Line;

	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x40")]
	internal Transform OriginHandle;

	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x48")]
	internal Transform EndHandle;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x50")]
	internal TextMesh Label;

	[Token(Token = "0x170000D3")]
	public float Length
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x21FC4C0", Offset = "0x21FAAC0", VA = "0x1821FC4C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x21FC430", Offset = "0x21FAA30", VA = "0x1821FC430")]
	public RulerMeasurement()
	{
	}
}

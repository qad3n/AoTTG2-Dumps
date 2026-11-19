// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.RulerMeasurement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/RulerMeasurement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/MapEditor/RulerMeasurement.c (MapEditor.RulerMeasurement$$get_Length): clean
			float fVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			float fVar7;

			uVar2 = this.Origin.x;
			uVar4 = this.Origin.y;
			fVar7 = this.Origin.z;
			uVar3 = this.End.x;
			uVar5 = this.End.y;
			fVar1 = this.End.z;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			fVar7 = fVar7 - fVar1;
			fVar7 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar7 * fVar7;
			if (fVar7 < 0.0) {
				fVar7 = sqrtf(fVar7);
				return fVar7;
			}
			return SQRT(fVar7);
		}
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x5CB6AF0", Offset = "0x5CB5AF0", VA = "0x5CB6AF0")]
	public RulerMeasurement()
	{
		// Lifted from source/cpp/MapEditor/RulerMeasurement.c (MapEditor.RulerMeasurement$$.ctor): clean
		Color255 __this_00;

		__this_00 = new Color255(0xff, 0xd2, 0x28, 0xff);
		this.Color = __this_00;
		base();
		return;
	}
}
